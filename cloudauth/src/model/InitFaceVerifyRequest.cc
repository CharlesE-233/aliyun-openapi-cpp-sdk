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

#include <alibabacloud/cloudauth/model/InitFaceVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::InitFaceVerifyRequest;

InitFaceVerifyRequest::InitFaceVerifyRequest() :
	RpcServiceRequest("cloudauth", "2019-03-07", "InitFaceVerify")
{
	setMethod(HttpRequest::Method::Post);
}

InitFaceVerifyRequest::~InitFaceVerifyRequest()
{}

std::string InitFaceVerifyRequest::getProductCode()const
{
	return productCode_;
}

void InitFaceVerifyRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

std::string InitFaceVerifyRequest::getFaceContrastPicture()const
{
	return faceContrastPicture_;
}

void InitFaceVerifyRequest::setFaceContrastPicture(const std::string& faceContrastPicture)
{
	faceContrastPicture_ = faceContrastPicture;
	setParameter("FaceContrastPicture", faceContrastPicture);
}

std::string InitFaceVerifyRequest::getCertName()const
{
	return certName_;
}

void InitFaceVerifyRequest::setCertName(const std::string& certName)
{
	certName_ = certName;
	setParameter("CertName", certName);
}

std::string InitFaceVerifyRequest::getCertNo()const
{
	return certNo_;
}

void InitFaceVerifyRequest::setCertNo(const std::string& certNo)
{
	certNo_ = certNo;
	setParameter("CertNo", certNo);
}

std::string InitFaceVerifyRequest::getOuterOrderNo()const
{
	return outerOrderNo_;
}

void InitFaceVerifyRequest::setOuterOrderNo(const std::string& outerOrderNo)
{
	outerOrderNo_ = outerOrderNo;
	setParameter("OuterOrderNo", outerOrderNo);
}

std::string InitFaceVerifyRequest::getCertType()const
{
	return certType_;
}

void InitFaceVerifyRequest::setCertType(const std::string& certType)
{
	certType_ = certType;
	setParameter("CertType", certType);
}

long InitFaceVerifyRequest::getSceneId()const
{
	return sceneId_;
}

void InitFaceVerifyRequest::setSceneId(long sceneId)
{
	sceneId_ = sceneId;
	setParameter("SceneId", std::to_string(sceneId));
}

std::string InitFaceVerifyRequest::getReturnUrl()const
{
	return returnUrl_;
}

void InitFaceVerifyRequest::setReturnUrl(const std::string& returnUrl)
{
	returnUrl_ = returnUrl;
	setParameter("ReturnUrl", returnUrl);
}

std::string InitFaceVerifyRequest::getMetaInfo()const
{
	return metaInfo_;
}

void InitFaceVerifyRequest::setMetaInfo(const std::string& metaInfo)
{
	metaInfo_ = metaInfo;
	setParameter("MetaInfo", metaInfo);
}

