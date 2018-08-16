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

#ifndef ALIBABACLOUD_LINKFACE_MODEL_REGISTERFACEREQUEST_H_
#define ALIBABACLOUD_LINKFACE_MODEL_REGISTERFACEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/linkface/LinkFaceExport.h>

namespace AlibabaCloud
{
	namespace LinkFace
	{
		namespace Model
		{
			class ALIBABACLOUD_LINKFACE_EXPORT RegisterFaceRequest : public RpcServiceRequest
			{

			public:
				RegisterFaceRequest();
				~RegisterFaceRequest();

				std::string getImage()const;
				void setImage(const std::string& image);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getUserId()const;
				void setUserId(const std::string& userId);
				std::string getUserInfo()const;
				void setUserInfo(const std::string& userInfo);

            private:
				std::string image_;
				std::string groupId_;
				std::string userId_;
				std::string userInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINKFACE_MODEL_REGISTERFACEREQUEST_H_