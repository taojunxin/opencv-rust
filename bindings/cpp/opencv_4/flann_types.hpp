template struct Result<bool>;
template struct Result<const char*>;
template struct Result<cv::flann::FlannIndexType>;
template struct Result<cvflann::flann_algorithm_t>;
template struct Result<cvflann::flann_distance_t>;
template struct Result<double>;
template struct Result<int>;
template struct Result<void*>;
extern "C" void cv_PtrOfIndexParams_delete(cv::Ptr<cv::flann::IndexParams>* instance) {
	delete instance;
}

extern "C" void* cv_PtrOfIndexParams_get_inner_ptr(cv::Ptr<cv::flann::IndexParams>* instance) {
	return instance->get();
}

extern "C" void cv_PtrOfSearchParams_delete(cv::Ptr<cv::flann::SearchParams>* instance) {
	delete instance;
}

extern "C" void* cv_PtrOfSearchParams_get_inner_ptr(cv::Ptr<cv::flann::SearchParams>* instance) {
	return instance->get();
}

extern "C" {
	void cv_VectorOfFlannIndexType_delete(std::vector<cv::flann::FlannIndexType>* instance) {
		delete instance;
	}

	void* cv_VectorOfFlannIndexType_new() {
		return new std::vector<cv::flann::FlannIndexType>();
	}

	size_t cv_VectorOfFlannIndexType_len(const std::vector<cv::flann::FlannIndexType>* instance) {
		return instance->size();
	}

	bool cv_VectorOfFlannIndexType_is_empty(const std::vector<cv::flann::FlannIndexType>* instance) {
		return instance->empty();
	}

	size_t cv_VectorOfFlannIndexType_capacity(const std::vector<cv::flann::FlannIndexType>* instance) {
		return instance->capacity();
	}

	void cv_VectorOfFlannIndexType_shrink_to_fit(std::vector<cv::flann::FlannIndexType>* instance) {
		instance->shrink_to_fit();
	}

	void cv_VectorOfFlannIndexType_reserve(std::vector<cv::flann::FlannIndexType>* instance, size_t additional) {
		instance->reserve(instance->size() + additional);
	}

	void cv_VectorOfFlannIndexType_remove(std::vector<cv::flann::FlannIndexType>* instance, size_t index) {
		instance->erase(instance->begin() + index);
	}

	void cv_VectorOfFlannIndexType_swap(std::vector<cv::flann::FlannIndexType>* instance, size_t index1, size_t index2) {
		std::swap((*instance)[index1], (*instance)[index2]);
	}

	void cv_VectorOfFlannIndexType_clear(std::vector<cv::flann::FlannIndexType>* instance) {
		instance->clear();
	}

	void cv_VectorOfFlannIndexType_push(std::vector<cv::flann::FlannIndexType>* instance, cv::flann::FlannIndexType val) {
		instance->push_back(val);
	}
	
	void cv_VectorOfFlannIndexType_insert(std::vector<cv::flann::FlannIndexType>* instance, size_t index, cv::flann::FlannIndexType val) {
		instance->insert(instance->begin() + index, val);
	}
	
	Result<cv::flann::FlannIndexType> cv_VectorOfFlannIndexType_get(const std::vector<cv::flann::FlannIndexType>* instance, size_t index) {
		try {
			return Ok<cv::flann::FlannIndexType>(instance->at(index));
		} VEC_CATCH(Result<cv::flann::FlannIndexType>)
	}
	
	Result_void cv_VectorOfFlannIndexType_set(std::vector<cv::flann::FlannIndexType>* instance, size_t index, cv::flann::FlannIndexType val) {
		try {
			instance->at(index) = val;
			return Ok();
		} VEC_CATCH(Result_void)
	}
	
	void cv_VectorOfFlannIndexType_set_unchecked(std::vector<cv::flann::FlannIndexType>* instance, size_t index, cv::flann::FlannIndexType val) {
		(*instance)[index] = val;
	}
	
	cv::flann::FlannIndexType cv_VectorOfFlannIndexType_get_unchecked(const std::vector<cv::flann::FlannIndexType>* instance, size_t index) {
		return (*instance)[index];
	}
	
	const void** cv_VectorOfFlannIndexType_data(std::vector<cv::flann::FlannIndexType>* instance) {
		return reinterpret_cast<const void**>(instance->data());
	}
	
}


