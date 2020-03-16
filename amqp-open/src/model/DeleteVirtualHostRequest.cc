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

#include <alibabacloud/amqp-open/model/DeleteVirtualHostRequest.h>

using AlibabaCloud::Amqp_open::Model::DeleteVirtualHostRequest;

DeleteVirtualHostRequest::DeleteVirtualHostRequest() :
	RpcServiceRequest("amqp-open", "2019-12-12", "DeleteVirtualHost")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteVirtualHostRequest::~DeleteVirtualHostRequest()
{}

std::string DeleteVirtualHostRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteVirtualHostRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setBodyParameter("InstanceId", instanceId);
}

std::string DeleteVirtualHostRequest::getVirtualHost()const
{
	return virtualHost_;
}

void DeleteVirtualHostRequest::setVirtualHost(const std::string& virtualHost)
{
	virtualHost_ = virtualHost;
	setBodyParameter("VirtualHost", virtualHost);
}

