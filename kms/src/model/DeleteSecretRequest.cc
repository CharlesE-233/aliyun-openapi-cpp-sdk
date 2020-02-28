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

#include <alibabacloud/kms/model/DeleteSecretRequest.h>

using AlibabaCloud::Kms::Model::DeleteSecretRequest;

DeleteSecretRequest::DeleteSecretRequest() :
	RpcServiceRequest("kms", "2016-01-20", "DeleteSecret")
{
	setMethod(HttpRequest::Method::POST);
}

DeleteSecretRequest::~DeleteSecretRequest()
{}

std::string DeleteSecretRequest::getForceDeleteWithoutRecovery()const
{
	return forceDeleteWithoutRecovery_;
}

void DeleteSecretRequest::setForceDeleteWithoutRecovery(const std::string& forceDeleteWithoutRecovery)
{
	forceDeleteWithoutRecovery_ = forceDeleteWithoutRecovery;
	setParameter("ForceDeleteWithoutRecovery", forceDeleteWithoutRecovery);
}

std::string DeleteSecretRequest::getRecoveryWindowInDays()const
{
	return recoveryWindowInDays_;
}

void DeleteSecretRequest::setRecoveryWindowInDays(const std::string& recoveryWindowInDays)
{
	recoveryWindowInDays_ = recoveryWindowInDays;
	setParameter("RecoveryWindowInDays", recoveryWindowInDays);
}

std::string DeleteSecretRequest::getSecretName()const
{
	return secretName_;
}

void DeleteSecretRequest::setSecretName(const std::string& secretName)
{
	secretName_ = secretName;
	setParameter("SecretName", secretName);
}

