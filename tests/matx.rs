use matches::assert_matches;

use opencv::{
	core::{self, Matx23f, Matx32f, Matx33d, Matx44d, Point2f, Scalar},
	imgproc,
	prelude::*,
	Result,
};

#[test]
fn matx_get() {
	let mut a = Matx33d::eye();
	assert_eq!(a[(0, 0)], 1.);
	assert_eq!(a[(1, 0)], 0.);
	assert_eq!(*a.get((0, 1)).unwrap(), 0.);
	assert_eq!(*a.get_mut((1, 1)).unwrap(), 1.);
	assert_matches!(a.get((3, 1)), None);
	assert_matches!(a.get_mut((1, 3)), None);
	assert_matches!(a.get((3, 3)), None);
}

#[cfg(all(feature = "opencv-4", not(target_env = "msvc")))]
#[test]
fn matx_return() -> Result<()> {
	let mat = imgproc::get_rotation_matrix_2d_matx(Point2f::new(10., 10.), 90., 2.)?;
	assert_eq!(2, mat.rows());
	assert_eq!(3, mat.cols());
	assert_eq!(mat[(0, 0)], mat[(1, 1)]);
	assert_eq!(-mat[(0, 1)], mat[(1, 0)]);
	Ok(())
}

#[cfg(feature = "contrib")]
#[test]
fn matx_arg() -> Result<()> {
	use opencv::surface_matching::Pose3D;

	let mut pose = Pose3D::default()?;
	assert!(&pose.pose().val.iter().all(|&x| x == 0.));
	pose.set_pose(Matx44d::all(9.));
	assert!(&pose.pose().val.iter().all(|&x| x == 9.));
	Ok(())
}

#[test]
fn matx_input_array() -> Result<()> {
	assert_eq!(Scalar::from(2.), core::sum_elems(&Matx32f::eye())?);
	assert_eq!(Scalar::from(2.), core::sum_elems(&Matx23f::eye())?);
	Ok(())
}

#[test]
fn matx_input_output_array() -> Result<()> {
	let mut mat = Matx33d::from([
		1., 2., 3.,
		4., 5., 6.,
		9., 8., 9.,
	]);
	core::complete_symm(&mut mat, false)?;
	let expected = Matx33d::from([
		1., 2., 3.,
		2., 5., 6.,
		3., 6., 9.,
	]);
	assert_eq!(expected, mat);
	Ok(())
}
