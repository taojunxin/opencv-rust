#include "common.hpp"
#include <opencv2/surface_matching.hpp>
#include "surface_matching_types.hpp"

extern "C" {
	void cv_ICP_delete(cv::ppf_match_3d::ICP* instance) {
		delete instance;
	}
	Result<void*> cv_ppf_match_3d_ICP_ICP() {
		try {
			cv::ppf_match_3d::ICP* ret = new cv::ppf_match_3d::ICP();
			return Ok<void*>(ret);
		} OCVRS_CATCH(Result<void*>)
	}
	
	Result<void*> cv_ppf_match_3d_ICP_ICP_int_float_float_int_ICP_SAMPLING_TYPE_int(int iterations, float tolerence, float rejectionScale, int numLevels, cv::ppf_match_3d::ICP::ICP_SAMPLING_TYPE sampleType, int numMaxCorr) {
		try {
			cv::ppf_match_3d::ICP* ret = new cv::ppf_match_3d::ICP(iterations, tolerence, rejectionScale, numLevels, sampleType, numMaxCorr);
			return Ok<void*>(ret);
		} OCVRS_CATCH(Result<void*>)
	}
	
	Result<int> cv_ppf_match_3d_ICP_registerModelToScene_const_MatX_const_MatX_doubleX_double_X__16_(void* instance, void* srcPC, void* dstPC, double* residual, double(*pose)[16]) {
		try {
			int ret = reinterpret_cast<cv::ppf_match_3d::ICP*>(instance)->registerModelToScene(*reinterpret_cast<const cv::Mat*>(srcPC), *reinterpret_cast<const cv::Mat*>(dstPC), *residual, *pose);
			return Ok<int>(ret);
		} OCVRS_CATCH(Result<int>)
	}
	
	Result<int> cv_ppf_match_3d_ICP_registerModelToScene_const_MatX_const_MatX_vector_Pose3DPtr_X(void* instance, void* srcPC, void* dstPC, void* poses) {
		try {
			int ret = reinterpret_cast<cv::ppf_match_3d::ICP*>(instance)->registerModelToScene(*reinterpret_cast<const cv::Mat*>(srcPC), *reinterpret_cast<const cv::Mat*>(dstPC), *reinterpret_cast<std::vector<cv::ppf_match_3d::Pose3DPtr>*>(poses));
			return Ok<int>(ret);
		} OCVRS_CATCH(Result<int>)
	}
	
	void cv_PPF3DDetector_delete(cv::ppf_match_3d::PPF3DDetector* instance) {
		delete instance;
	}
	Result<void*> cv_ppf_match_3d_PPF3DDetector_PPF3DDetector() {
		try {
			cv::ppf_match_3d::PPF3DDetector* ret = new cv::ppf_match_3d::PPF3DDetector();
			return Ok<void*>(ret);
		} OCVRS_CATCH(Result<void*>)
	}
	
	Result<void*> cv_ppf_match_3d_PPF3DDetector_PPF3DDetector_double_double_double(double relativeSamplingStep, double relativeDistanceStep, double numAngles) {
		try {
			cv::ppf_match_3d::PPF3DDetector* ret = new cv::ppf_match_3d::PPF3DDetector(relativeSamplingStep, relativeDistanceStep, numAngles);
			return Ok<void*>(ret);
		} OCVRS_CATCH(Result<void*>)
	}
	
	Result_void cv_ppf_match_3d_PPF3DDetector_setSearchParams_double_double_bool(void* instance, double positionThreshold, double rotationThreshold, bool useWeightedClustering) {
		try {
			reinterpret_cast<cv::ppf_match_3d::PPF3DDetector*>(instance)->setSearchParams(positionThreshold, rotationThreshold, useWeightedClustering);
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result_void cv_ppf_match_3d_PPF3DDetector_trainModel_const_MatX(void* instance, void* Model) {
		try {
			reinterpret_cast<cv::ppf_match_3d::PPF3DDetector*>(instance)->trainModel(*reinterpret_cast<const cv::Mat*>(Model));
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result_void cv_ppf_match_3d_PPF3DDetector_match_const_MatX_vector_Pose3DPtr_X_double_double(void* instance, void* scene, void* results, double relativeSceneSampleStep, double relativeSceneDistance) {
		try {
			reinterpret_cast<cv::ppf_match_3d::PPF3DDetector*>(instance)->match(*reinterpret_cast<const cv::Mat*>(scene), *reinterpret_cast<std::vector<cv::ppf_match_3d::Pose3DPtr>*>(results), relativeSceneSampleStep, relativeSceneDistance);
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result_void cv_ppf_match_3d_PPF3DDetector_read_const_FileNodeX(void* instance, void* fn) {
		try {
			reinterpret_cast<cv::ppf_match_3d::PPF3DDetector*>(instance)->read(*reinterpret_cast<const cv::FileNode*>(fn));
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result_void cv_ppf_match_3d_PPF3DDetector_write_const_FileStorageX(void* instance, void* fs) {
		try {
			reinterpret_cast<cv::ppf_match_3d::PPF3DDetector*>(instance)->write(*reinterpret_cast<cv::FileStorage*>(fs));
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result<double> cv_ppf_match_3d_Pose3D_alpha_const(void* instance) {
		try {
			double ret = reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->alpha;
			return Ok<double>(ret);
		} OCVRS_CATCH(Result<double>)
	}
	
	Result_void cv_ppf_match_3d_Pose3D_setAlpha_double(void* instance, double val) {
		try {
			reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->alpha = val;
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result<double> cv_ppf_match_3d_Pose3D_residual_const(void* instance) {
		try {
			double ret = reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->residual;
			return Ok<double>(ret);
		} OCVRS_CATCH(Result<double>)
	}
	
	Result_void cv_ppf_match_3d_Pose3D_setResidual_double(void* instance, double val) {
		try {
			reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->residual = val;
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result<unsigned int> cv_ppf_match_3d_Pose3D_modelIndex_const(void* instance) {
		try {
			unsigned int ret = reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->modelIndex;
			return Ok<unsigned int>(ret);
		} OCVRS_CATCH(Result<unsigned int>)
	}
	
	Result_void cv_ppf_match_3d_Pose3D_setModelIndex_unsigned_int(void* instance, unsigned int val) {
		try {
			reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->modelIndex = val;
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result<unsigned int> cv_ppf_match_3d_Pose3D_numVotes_const(void* instance) {
		try {
			unsigned int ret = reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->numVotes;
			return Ok<unsigned int>(ret);
		} OCVRS_CATCH(Result<unsigned int>)
	}
	
	Result_void cv_ppf_match_3d_Pose3D_setNumVotes_unsigned_int(void* instance, unsigned int val) {
		try {
			reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->numVotes = val;
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result<double(*)[16]> cv_ppf_match_3d_Pose3D_pose(void* instance) {
		try {
			double(*ret)[16] = &reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->pose;
			return Ok<double(*)[16]>(ret);
		} OCVRS_CATCH(Result<double(*)[16]>)
	}
	
	Result<double> cv_ppf_match_3d_Pose3D_angle_const(void* instance) {
		try {
			double ret = reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->angle;
			return Ok<double>(ret);
		} OCVRS_CATCH(Result<double>)
	}
	
	Result_void cv_ppf_match_3d_Pose3D_setAngle_double(void* instance, double val) {
		try {
			reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->angle = val;
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result<double(*)[3]> cv_ppf_match_3d_Pose3D_t(void* instance) {
		try {
			double(*ret)[3] = &reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->t;
			return Ok<double(*)[3]>(ret);
		} OCVRS_CATCH(Result<double(*)[3]>)
	}
	
	Result<double(*)[4]> cv_ppf_match_3d_Pose3D_q(void* instance) {
		try {
			double(*ret)[4] = &reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->q;
			return Ok<double(*)[4]>(ret);
		} OCVRS_CATCH(Result<double(*)[4]>)
	}
	
	void cv_Pose3D_delete(cv::ppf_match_3d::Pose3D* instance) {
		delete instance;
	}
	Result<void*> cv_ppf_match_3d_Pose3D_Pose3D() {
		try {
			cv::ppf_match_3d::Pose3D* ret = new cv::ppf_match_3d::Pose3D();
			return Ok<void*>(ret);
		} OCVRS_CATCH(Result<void*>)
	}
	
	Result<void*> cv_ppf_match_3d_Pose3D_Pose3D_double_unsigned_int_unsigned_int(double Alpha, unsigned int ModelIndex, unsigned int NumVotes) {
		try {
			cv::ppf_match_3d::Pose3D* ret = new cv::ppf_match_3d::Pose3D(Alpha, ModelIndex, NumVotes);
			return Ok<void*>(ret);
		} OCVRS_CATCH(Result<void*>)
	}
	
	Result_void cv_ppf_match_3d_Pose3D_updatePose_double_X__16_(void* instance, double(*NewPose)[16]) {
		try {
			reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->updatePose(*NewPose);
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result_void cv_ppf_match_3d_Pose3D_updatePose_double_X__9__double_X__3_(void* instance, double(*NewR)[9], double(*NewT)[3]) {
		try {
			reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->updatePose(*NewR, *NewT);
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result_void cv_ppf_match_3d_Pose3D_updatePoseQuat_double_X__4__double_X__3_(void* instance, double(*Q)[4], double(*NewT)[3]) {
		try {
			reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->updatePoseQuat(*Q, *NewT);
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result_void cv_ppf_match_3d_Pose3D_appendPose_double_X__16_(void* instance, double(*IncrementalPose)[16]) {
		try {
			reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->appendPose(*IncrementalPose);
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result_void cv_ppf_match_3d_Pose3D_printPose(void* instance) {
		try {
			reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->printPose();
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result<void*> cv_ppf_match_3d_Pose3D_clone(void* instance) {
		try {
			cv::ppf_match_3d::Pose3DPtr ret = reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->clone();
			return Ok<void*>(new cv::ppf_match_3d::Pose3DPtr(ret));
		} OCVRS_CATCH(Result<void*>)
	}
	
	Result<int> cv_ppf_match_3d_Pose3D_writePose_const_stringX(void* instance, const char* FileName) {
		try {
			int ret = reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->writePose(std::string(FileName));
			return Ok<int>(ret);
		} OCVRS_CATCH(Result<int>)
	}
	
	Result<int> cv_ppf_match_3d_Pose3D_readPose_const_stringX(void* instance, const char* FileName) {
		try {
			int ret = reinterpret_cast<cv::ppf_match_3d::Pose3D*>(instance)->readPose(std::string(FileName));
			return Ok<int>(ret);
		} OCVRS_CATCH(Result<int>)
	}
	
	Result<void*> cv_ppf_match_3d_PoseCluster3D_poseList(void* instance) {
		try {
			std::vector<cv::ppf_match_3d::Pose3DPtr> ret = reinterpret_cast<cv::ppf_match_3d::PoseCluster3D*>(instance)->poseList;
			return Ok<void*>(new std::vector<cv::ppf_match_3d::Pose3DPtr>(ret));
		} OCVRS_CATCH(Result<void*>)
	}
	
	Result_void cv_ppf_match_3d_PoseCluster3D_setPoseList_vector_Pose3DPtr_(void* instance, void* val) {
		try {
			reinterpret_cast<cv::ppf_match_3d::PoseCluster3D*>(instance)->poseList = *reinterpret_cast<std::vector<cv::ppf_match_3d::Pose3DPtr>*>(val);
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result<int> cv_ppf_match_3d_PoseCluster3D_numVotes_const(void* instance) {
		try {
			int ret = reinterpret_cast<cv::ppf_match_3d::PoseCluster3D*>(instance)->numVotes;
			return Ok<int>(ret);
		} OCVRS_CATCH(Result<int>)
	}
	
	Result_void cv_ppf_match_3d_PoseCluster3D_setNumVotes_int(void* instance, int val) {
		try {
			reinterpret_cast<cv::ppf_match_3d::PoseCluster3D*>(instance)->numVotes = val;
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result<int> cv_ppf_match_3d_PoseCluster3D_id_const(void* instance) {
		try {
			int ret = reinterpret_cast<cv::ppf_match_3d::PoseCluster3D*>(instance)->id;
			return Ok<int>(ret);
		} OCVRS_CATCH(Result<int>)
	}
	
	Result_void cv_ppf_match_3d_PoseCluster3D_setId_int(void* instance, int val) {
		try {
			reinterpret_cast<cv::ppf_match_3d::PoseCluster3D*>(instance)->id = val;
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	void cv_PoseCluster3D_delete(cv::ppf_match_3d::PoseCluster3D* instance) {
		delete instance;
	}
	Result<void*> cv_ppf_match_3d_PoseCluster3D_PoseCluster3D() {
		try {
			cv::ppf_match_3d::PoseCluster3D* ret = new cv::ppf_match_3d::PoseCluster3D();
			return Ok<void*>(ret);
		} OCVRS_CATCH(Result<void*>)
	}
	
	Result<void*> cv_ppf_match_3d_PoseCluster3D_PoseCluster3D_Pose3DPtr(void* newPose) {
		try {
			cv::ppf_match_3d::PoseCluster3D* ret = new cv::ppf_match_3d::PoseCluster3D(*reinterpret_cast<cv::ppf_match_3d::Pose3DPtr*>(newPose));
			return Ok<void*>(ret);
		} OCVRS_CATCH(Result<void*>)
	}
	
	Result<void*> cv_ppf_match_3d_PoseCluster3D_PoseCluster3D_Pose3DPtr_int(void* newPose, int newId) {
		try {
			cv::ppf_match_3d::PoseCluster3D* ret = new cv::ppf_match_3d::PoseCluster3D(*reinterpret_cast<cv::ppf_match_3d::Pose3DPtr*>(newPose), newId);
			return Ok<void*>(ret);
		} OCVRS_CATCH(Result<void*>)
	}
	
	Result_void cv_ppf_match_3d_PoseCluster3D_addPose_Pose3DPtr(void* instance, void* newPose) {
		try {
			reinterpret_cast<cv::ppf_match_3d::PoseCluster3D*>(instance)->addPose(*reinterpret_cast<cv::ppf_match_3d::Pose3DPtr*>(newPose));
			return Ok();
		} OCVRS_CATCH(Result_void)
	}
	
	Result<int> cv_ppf_match_3d_PoseCluster3D_writePoseCluster_const_stringX(void* instance, const char* FileName) {
		try {
			int ret = reinterpret_cast<cv::ppf_match_3d::PoseCluster3D*>(instance)->writePoseCluster(std::string(FileName));
			return Ok<int>(ret);
		} OCVRS_CATCH(Result<int>)
	}
	
	Result<int> cv_ppf_match_3d_PoseCluster3D_readPoseCluster_const_stringX(void* instance, const char* FileName) {
		try {
			int ret = reinterpret_cast<cv::ppf_match_3d::PoseCluster3D*>(instance)->readPoseCluster(std::string(FileName));
			return Ok<int>(ret);
		} OCVRS_CATCH(Result<int>)
	}
	
}
