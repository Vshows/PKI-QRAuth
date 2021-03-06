package io.tomahawkd.simpleserver.service;

import io.tomahawkd.simpleserver.model.UserInfoModel;

public interface UserInfoService {
	UserInfoModel getUserInfo(int userid);

	boolean updateUserInfo(UserInfoModel model) throws Exception;
}
