/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_CLOUDAUTH_CLOUDAUTHCLIENT_H_
#define ALIBABACLOUD_CLOUDAUTH_CLOUDAUTHCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "CloudauthExport.h"
#include "model/CompareFacesRequest.h"
#include "model/CompareFacesResult.h"
#include "model/CreateAuthKeyRequest.h"
#include "model/CreateAuthKeyResult.h"
#include "model/CreateRPSDKRequest.h"
#include "model/CreateRPSDKResult.h"
#include "model/CreateVerifySDKRequest.h"
#include "model/CreateVerifySDKResult.h"
#include "model/CreateVerifySettingRequest.h"
#include "model/CreateVerifySettingResult.h"
#include "model/DescribeDeviceInfoRequest.h"
#include "model/DescribeDeviceInfoResult.h"
#include "model/DescribeFaceUsageRequest.h"
#include "model/DescribeFaceUsageResult.h"
#include "model/DescribeFaceVerifyRequest.h"
#include "model/DescribeFaceVerifyResult.h"
#include "model/DescribeOssUploadTokenRequest.h"
#include "model/DescribeOssUploadTokenResult.h"
#include "model/DescribeRPSDKRequest.h"
#include "model/DescribeRPSDKResult.h"
#include "model/DescribeUploadInfoRequest.h"
#include "model/DescribeUploadInfoResult.h"
#include "model/DescribeUserStatusRequest.h"
#include "model/DescribeUserStatusResult.h"
#include "model/DescribeVerifyRecordsRequest.h"
#include "model/DescribeVerifyRecordsResult.h"
#include "model/DescribeVerifyResultRequest.h"
#include "model/DescribeVerifyResultResult.h"
#include "model/DescribeVerifySDKRequest.h"
#include "model/DescribeVerifySDKResult.h"
#include "model/DescribeVerifySettingRequest.h"
#include "model/DescribeVerifySettingResult.h"
#include "model/DescribeVerifyTokenRequest.h"
#include "model/DescribeVerifyTokenResult.h"
#include "model/DescribeVerifyUsageRequest.h"
#include "model/DescribeVerifyUsageResult.h"
#include "model/DetectFaceAttributesRequest.h"
#include "model/DetectFaceAttributesResult.h"
#include "model/InitDeviceRequest.h"
#include "model/InitDeviceResult.h"
#include "model/InitFaceVerifyRequest.h"
#include "model/InitFaceVerifyResult.h"
#include "model/ModifyDeviceInfoRequest.h"
#include "model/ModifyDeviceInfoResult.h"
#include "model/UpdateVerifySettingRequest.h"
#include "model/UpdateVerifySettingResult.h"
#include "model/VerifyDeviceRequest.h"
#include "model/VerifyDeviceResult.h"
#include "model/VerifyMaterialRequest.h"
#include "model/VerifyMaterialResult.h"


namespace AlibabaCloud
{
	namespace Cloudauth
	{
		class ALIBABACLOUD_CLOUDAUTH_EXPORT CloudauthClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CompareFacesResult> CompareFacesOutcome;
			typedef std::future<CompareFacesOutcome> CompareFacesOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::CompareFacesRequest&, const CompareFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CompareFacesAsyncHandler;
			typedef Outcome<Error, Model::CreateAuthKeyResult> CreateAuthKeyOutcome;
			typedef std::future<CreateAuthKeyOutcome> CreateAuthKeyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::CreateAuthKeyRequest&, const CreateAuthKeyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuthKeyAsyncHandler;
			typedef Outcome<Error, Model::CreateRPSDKResult> CreateRPSDKOutcome;
			typedef std::future<CreateRPSDKOutcome> CreateRPSDKOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::CreateRPSDKRequest&, const CreateRPSDKOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateRPSDKAsyncHandler;
			typedef Outcome<Error, Model::CreateVerifySDKResult> CreateVerifySDKOutcome;
			typedef std::future<CreateVerifySDKOutcome> CreateVerifySDKOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::CreateVerifySDKRequest&, const CreateVerifySDKOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVerifySDKAsyncHandler;
			typedef Outcome<Error, Model::CreateVerifySettingResult> CreateVerifySettingOutcome;
			typedef std::future<CreateVerifySettingOutcome> CreateVerifySettingOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::CreateVerifySettingRequest&, const CreateVerifySettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateVerifySettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeDeviceInfoResult> DescribeDeviceInfoOutcome;
			typedef std::future<DescribeDeviceInfoOutcome> DescribeDeviceInfoOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeDeviceInfoRequest&, const DescribeDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeFaceUsageResult> DescribeFaceUsageOutcome;
			typedef std::future<DescribeFaceUsageOutcome> DescribeFaceUsageOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeFaceUsageRequest&, const DescribeFaceUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFaceUsageAsyncHandler;
			typedef Outcome<Error, Model::DescribeFaceVerifyResult> DescribeFaceVerifyOutcome;
			typedef std::future<DescribeFaceVerifyOutcome> DescribeFaceVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeFaceVerifyRequest&, const DescribeFaceVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFaceVerifyAsyncHandler;
			typedef Outcome<Error, Model::DescribeOssUploadTokenResult> DescribeOssUploadTokenOutcome;
			typedef std::future<DescribeOssUploadTokenOutcome> DescribeOssUploadTokenOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeOssUploadTokenRequest&, const DescribeOssUploadTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOssUploadTokenAsyncHandler;
			typedef Outcome<Error, Model::DescribeRPSDKResult> DescribeRPSDKOutcome;
			typedef std::future<DescribeRPSDKOutcome> DescribeRPSDKOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeRPSDKRequest&, const DescribeRPSDKOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRPSDKAsyncHandler;
			typedef Outcome<Error, Model::DescribeUploadInfoResult> DescribeUploadInfoOutcome;
			typedef std::future<DescribeUploadInfoOutcome> DescribeUploadInfoOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeUploadInfoRequest&, const DescribeUploadInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUploadInfoAsyncHandler;
			typedef Outcome<Error, Model::DescribeUserStatusResult> DescribeUserStatusOutcome;
			typedef std::future<DescribeUserStatusOutcome> DescribeUserStatusOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeUserStatusRequest&, const DescribeUserStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUserStatusAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifyRecordsResult> DescribeVerifyRecordsOutcome;
			typedef std::future<DescribeVerifyRecordsOutcome> DescribeVerifyRecordsOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeVerifyRecordsRequest&, const DescribeVerifyRecordsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifyRecordsAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifyResultResult> DescribeVerifyResultOutcome;
			typedef std::future<DescribeVerifyResultOutcome> DescribeVerifyResultOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeVerifyResultRequest&, const DescribeVerifyResultOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifyResultAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifySDKResult> DescribeVerifySDKOutcome;
			typedef std::future<DescribeVerifySDKOutcome> DescribeVerifySDKOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeVerifySDKRequest&, const DescribeVerifySDKOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifySDKAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifySettingResult> DescribeVerifySettingOutcome;
			typedef std::future<DescribeVerifySettingOutcome> DescribeVerifySettingOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeVerifySettingRequest&, const DescribeVerifySettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifySettingAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifyTokenResult> DescribeVerifyTokenOutcome;
			typedef std::future<DescribeVerifyTokenOutcome> DescribeVerifyTokenOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeVerifyTokenRequest&, const DescribeVerifyTokenOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifyTokenAsyncHandler;
			typedef Outcome<Error, Model::DescribeVerifyUsageResult> DescribeVerifyUsageOutcome;
			typedef std::future<DescribeVerifyUsageOutcome> DescribeVerifyUsageOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DescribeVerifyUsageRequest&, const DescribeVerifyUsageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVerifyUsageAsyncHandler;
			typedef Outcome<Error, Model::DetectFaceAttributesResult> DetectFaceAttributesOutcome;
			typedef std::future<DetectFaceAttributesOutcome> DetectFaceAttributesOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::DetectFaceAttributesRequest&, const DetectFaceAttributesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DetectFaceAttributesAsyncHandler;
			typedef Outcome<Error, Model::InitDeviceResult> InitDeviceOutcome;
			typedef std::future<InitDeviceOutcome> InitDeviceOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::InitDeviceRequest&, const InitDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitDeviceAsyncHandler;
			typedef Outcome<Error, Model::InitFaceVerifyResult> InitFaceVerifyOutcome;
			typedef std::future<InitFaceVerifyOutcome> InitFaceVerifyOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::InitFaceVerifyRequest&, const InitFaceVerifyOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> InitFaceVerifyAsyncHandler;
			typedef Outcome<Error, Model::ModifyDeviceInfoResult> ModifyDeviceInfoOutcome;
			typedef std::future<ModifyDeviceInfoOutcome> ModifyDeviceInfoOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::ModifyDeviceInfoRequest&, const ModifyDeviceInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceInfoAsyncHandler;
			typedef Outcome<Error, Model::UpdateVerifySettingResult> UpdateVerifySettingOutcome;
			typedef std::future<UpdateVerifySettingOutcome> UpdateVerifySettingOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::UpdateVerifySettingRequest&, const UpdateVerifySettingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateVerifySettingAsyncHandler;
			typedef Outcome<Error, Model::VerifyDeviceResult> VerifyDeviceOutcome;
			typedef std::future<VerifyDeviceOutcome> VerifyDeviceOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::VerifyDeviceRequest&, const VerifyDeviceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyDeviceAsyncHandler;
			typedef Outcome<Error, Model::VerifyMaterialResult> VerifyMaterialOutcome;
			typedef std::future<VerifyMaterialOutcome> VerifyMaterialOutcomeCallable;
			typedef std::function<void(const CloudauthClient*, const Model::VerifyMaterialRequest&, const VerifyMaterialOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VerifyMaterialAsyncHandler;

			CloudauthClient(const Credentials &credentials, const ClientConfiguration &configuration);
			CloudauthClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			CloudauthClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~CloudauthClient();
			CompareFacesOutcome compareFaces(const Model::CompareFacesRequest &request)const;
			void compareFacesAsync(const Model::CompareFacesRequest& request, const CompareFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CompareFacesOutcomeCallable compareFacesCallable(const Model::CompareFacesRequest& request) const;
			CreateAuthKeyOutcome createAuthKey(const Model::CreateAuthKeyRequest &request)const;
			void createAuthKeyAsync(const Model::CreateAuthKeyRequest& request, const CreateAuthKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAuthKeyOutcomeCallable createAuthKeyCallable(const Model::CreateAuthKeyRequest& request) const;
			CreateRPSDKOutcome createRPSDK(const Model::CreateRPSDKRequest &request)const;
			void createRPSDKAsync(const Model::CreateRPSDKRequest& request, const CreateRPSDKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateRPSDKOutcomeCallable createRPSDKCallable(const Model::CreateRPSDKRequest& request) const;
			CreateVerifySDKOutcome createVerifySDK(const Model::CreateVerifySDKRequest &request)const;
			void createVerifySDKAsync(const Model::CreateVerifySDKRequest& request, const CreateVerifySDKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVerifySDKOutcomeCallable createVerifySDKCallable(const Model::CreateVerifySDKRequest& request) const;
			CreateVerifySettingOutcome createVerifySetting(const Model::CreateVerifySettingRequest &request)const;
			void createVerifySettingAsync(const Model::CreateVerifySettingRequest& request, const CreateVerifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateVerifySettingOutcomeCallable createVerifySettingCallable(const Model::CreateVerifySettingRequest& request) const;
			DescribeDeviceInfoOutcome describeDeviceInfo(const Model::DescribeDeviceInfoRequest &request)const;
			void describeDeviceInfoAsync(const Model::DescribeDeviceInfoRequest& request, const DescribeDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeDeviceInfoOutcomeCallable describeDeviceInfoCallable(const Model::DescribeDeviceInfoRequest& request) const;
			DescribeFaceUsageOutcome describeFaceUsage(const Model::DescribeFaceUsageRequest &request)const;
			void describeFaceUsageAsync(const Model::DescribeFaceUsageRequest& request, const DescribeFaceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFaceUsageOutcomeCallable describeFaceUsageCallable(const Model::DescribeFaceUsageRequest& request) const;
			DescribeFaceVerifyOutcome describeFaceVerify(const Model::DescribeFaceVerifyRequest &request)const;
			void describeFaceVerifyAsync(const Model::DescribeFaceVerifyRequest& request, const DescribeFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeFaceVerifyOutcomeCallable describeFaceVerifyCallable(const Model::DescribeFaceVerifyRequest& request) const;
			DescribeOssUploadTokenOutcome describeOssUploadToken(const Model::DescribeOssUploadTokenRequest &request)const;
			void describeOssUploadTokenAsync(const Model::DescribeOssUploadTokenRequest& request, const DescribeOssUploadTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeOssUploadTokenOutcomeCallable describeOssUploadTokenCallable(const Model::DescribeOssUploadTokenRequest& request) const;
			DescribeRPSDKOutcome describeRPSDK(const Model::DescribeRPSDKRequest &request)const;
			void describeRPSDKAsync(const Model::DescribeRPSDKRequest& request, const DescribeRPSDKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRPSDKOutcomeCallable describeRPSDKCallable(const Model::DescribeRPSDKRequest& request) const;
			DescribeUploadInfoOutcome describeUploadInfo(const Model::DescribeUploadInfoRequest &request)const;
			void describeUploadInfoAsync(const Model::DescribeUploadInfoRequest& request, const DescribeUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUploadInfoOutcomeCallable describeUploadInfoCallable(const Model::DescribeUploadInfoRequest& request) const;
			DescribeUserStatusOutcome describeUserStatus(const Model::DescribeUserStatusRequest &request)const;
			void describeUserStatusAsync(const Model::DescribeUserStatusRequest& request, const DescribeUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeUserStatusOutcomeCallable describeUserStatusCallable(const Model::DescribeUserStatusRequest& request) const;
			DescribeVerifyRecordsOutcome describeVerifyRecords(const Model::DescribeVerifyRecordsRequest &request)const;
			void describeVerifyRecordsAsync(const Model::DescribeVerifyRecordsRequest& request, const DescribeVerifyRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifyRecordsOutcomeCallable describeVerifyRecordsCallable(const Model::DescribeVerifyRecordsRequest& request) const;
			DescribeVerifyResultOutcome describeVerifyResult(const Model::DescribeVerifyResultRequest &request)const;
			void describeVerifyResultAsync(const Model::DescribeVerifyResultRequest& request, const DescribeVerifyResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifyResultOutcomeCallable describeVerifyResultCallable(const Model::DescribeVerifyResultRequest& request) const;
			DescribeVerifySDKOutcome describeVerifySDK(const Model::DescribeVerifySDKRequest &request)const;
			void describeVerifySDKAsync(const Model::DescribeVerifySDKRequest& request, const DescribeVerifySDKAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifySDKOutcomeCallable describeVerifySDKCallable(const Model::DescribeVerifySDKRequest& request) const;
			DescribeVerifySettingOutcome describeVerifySetting(const Model::DescribeVerifySettingRequest &request)const;
			void describeVerifySettingAsync(const Model::DescribeVerifySettingRequest& request, const DescribeVerifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifySettingOutcomeCallable describeVerifySettingCallable(const Model::DescribeVerifySettingRequest& request) const;
			DescribeVerifyTokenOutcome describeVerifyToken(const Model::DescribeVerifyTokenRequest &request)const;
			void describeVerifyTokenAsync(const Model::DescribeVerifyTokenRequest& request, const DescribeVerifyTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifyTokenOutcomeCallable describeVerifyTokenCallable(const Model::DescribeVerifyTokenRequest& request) const;
			DescribeVerifyUsageOutcome describeVerifyUsage(const Model::DescribeVerifyUsageRequest &request)const;
			void describeVerifyUsageAsync(const Model::DescribeVerifyUsageRequest& request, const DescribeVerifyUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeVerifyUsageOutcomeCallable describeVerifyUsageCallable(const Model::DescribeVerifyUsageRequest& request) const;
			DetectFaceAttributesOutcome detectFaceAttributes(const Model::DetectFaceAttributesRequest &request)const;
			void detectFaceAttributesAsync(const Model::DetectFaceAttributesRequest& request, const DetectFaceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DetectFaceAttributesOutcomeCallable detectFaceAttributesCallable(const Model::DetectFaceAttributesRequest& request) const;
			InitDeviceOutcome initDevice(const Model::InitDeviceRequest &request)const;
			void initDeviceAsync(const Model::InitDeviceRequest& request, const InitDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitDeviceOutcomeCallable initDeviceCallable(const Model::InitDeviceRequest& request) const;
			InitFaceVerifyOutcome initFaceVerify(const Model::InitFaceVerifyRequest &request)const;
			void initFaceVerifyAsync(const Model::InitFaceVerifyRequest& request, const InitFaceVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			InitFaceVerifyOutcomeCallable initFaceVerifyCallable(const Model::InitFaceVerifyRequest& request) const;
			ModifyDeviceInfoOutcome modifyDeviceInfo(const Model::ModifyDeviceInfoRequest &request)const;
			void modifyDeviceInfoAsync(const Model::ModifyDeviceInfoRequest& request, const ModifyDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ModifyDeviceInfoOutcomeCallable modifyDeviceInfoCallable(const Model::ModifyDeviceInfoRequest& request) const;
			UpdateVerifySettingOutcome updateVerifySetting(const Model::UpdateVerifySettingRequest &request)const;
			void updateVerifySettingAsync(const Model::UpdateVerifySettingRequest& request, const UpdateVerifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateVerifySettingOutcomeCallable updateVerifySettingCallable(const Model::UpdateVerifySettingRequest& request) const;
			VerifyDeviceOutcome verifyDevice(const Model::VerifyDeviceRequest &request)const;
			void verifyDeviceAsync(const Model::VerifyDeviceRequest& request, const VerifyDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyDeviceOutcomeCallable verifyDeviceCallable(const Model::VerifyDeviceRequest& request) const;
			VerifyMaterialOutcome verifyMaterial(const Model::VerifyMaterialRequest &request)const;
			void verifyMaterialAsync(const Model::VerifyMaterialRequest& request, const VerifyMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VerifyMaterialOutcomeCallable verifyMaterialCallable(const Model::VerifyMaterialRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_CLOUDAUTH_CLOUDAUTHCLIENT_H_
