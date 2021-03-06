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

#include <alibabacloud/smc/model/CreateReplicationJobRequest.h>

using AlibabaCloud::Smc::Model::CreateReplicationJobRequest;

CreateReplicationJobRequest::CreateReplicationJobRequest() :
	RpcServiceRequest("smc", "2019-06-01", "CreateReplicationJob")
{
	setMethod(HttpRequest::Method::Post);
}

CreateReplicationJobRequest::~CreateReplicationJobRequest()
{}

std::string CreateReplicationJobRequest::getTargetType()const
{
	return targetType_;
}

void CreateReplicationJobRequest::setTargetType(const std::string& targetType)
{
	targetType_ = targetType;
	setCoreParameter("TargetType", targetType);
}

std::string CreateReplicationJobRequest::getClientToken()const
{
	return clientToken_;
}

void CreateReplicationJobRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateReplicationJobRequest::getDescription()const
{
	return description_;
}

void CreateReplicationJobRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateReplicationJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateReplicationJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

int CreateReplicationJobRequest::getFrequency()const
{
	return frequency_;
}

void CreateReplicationJobRequest::setFrequency(int frequency)
{
	frequency_ = frequency;
	setCoreParameter("Frequency", std::to_string(frequency));
}

std::string CreateReplicationJobRequest::getReplicationParameters()const
{
	return replicationParameters_;
}

void CreateReplicationJobRequest::setReplicationParameters(const std::string& replicationParameters)
{
	replicationParameters_ = replicationParameters;
	setCoreParameter("ReplicationParameters", replicationParameters);
}

std::string CreateReplicationJobRequest::getRegionId()const
{
	return regionId_;
}

void CreateReplicationJobRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateReplicationJobRequest::getImageName()const
{
	return imageName_;
}

void CreateReplicationJobRequest::setImageName(const std::string& imageName)
{
	imageName_ = imageName;
	setCoreParameter("ImageName", imageName);
}

int CreateReplicationJobRequest::getSystemDiskSize()const
{
	return systemDiskSize_;
}

void CreateReplicationJobRequest::setSystemDiskSize(int systemDiskSize)
{
	systemDiskSize_ = systemDiskSize;
	setCoreParameter("SystemDiskSize", std::to_string(systemDiskSize));
}

std::string CreateReplicationJobRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateReplicationJobRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::vector<CreateReplicationJobRequest::Tag> CreateReplicationJobRequest::getTag()const
{
	return tag_;
}

void CreateReplicationJobRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1);
		setCoreParameter(tagObjStr + ".Value", tagObj.value);
		setCoreParameter(tagObjStr + ".Key", tagObj.key);
	}
}

int CreateReplicationJobRequest::getNetMode()const
{
	return netMode_;
}

void CreateReplicationJobRequest::setNetMode(int netMode)
{
	netMode_ = netMode;
	setCoreParameter("NetMode", std::to_string(netMode));
}

std::string CreateReplicationJobRequest::getSourceId()const
{
	return sourceId_;
}

void CreateReplicationJobRequest::setSourceId(const std::string& sourceId)
{
	sourceId_ = sourceId;
	setCoreParameter("SourceId", sourceId);
}

bool CreateReplicationJobRequest::getRunOnce()const
{
	return runOnce_;
}

void CreateReplicationJobRequest::setRunOnce(bool runOnce)
{
	runOnce_ = runOnce;
	setCoreParameter("RunOnce", runOnce ? "true" : "false");
}

std::string CreateReplicationJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateReplicationJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateReplicationJobRequest::getValidTime()const
{
	return validTime_;
}

void CreateReplicationJobRequest::setValidTime(const std::string& validTime)
{
	validTime_ = validTime;
	setCoreParameter("ValidTime", validTime);
}

long CreateReplicationJobRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateReplicationJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<CreateReplicationJobRequest::DataDisk> CreateReplicationJobRequest::getDataDisk()const
{
	return dataDisk_;
}

void CreateReplicationJobRequest::setDataDisk(const std::vector<DataDisk>& dataDisk)
{
	dataDisk_ = dataDisk;
	for(int dep1 = 0; dep1!= dataDisk.size(); dep1++) {
		auto dataDiskObj = dataDisk.at(dep1);
		std::string dataDiskObjStr = "DataDisk." + std::to_string(dep1);
		setCoreParameter(dataDiskObjStr + ".Size", std::to_string(dataDiskObj.size));
		setCoreParameter(dataDiskObjStr + ".Index", std::to_string(dataDiskObj.index));
	}
}

std::string CreateReplicationJobRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateReplicationJobRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string CreateReplicationJobRequest::getScheduledStartTime()const
{
	return scheduledStartTime_;
}

void CreateReplicationJobRequest::setScheduledStartTime(const std::string& scheduledStartTime)
{
	scheduledStartTime_ = scheduledStartTime;
	setCoreParameter("ScheduledStartTime", scheduledStartTime);
}

std::string CreateReplicationJobRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateReplicationJobRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string CreateReplicationJobRequest::getVpcId()const
{
	return vpcId_;
}

void CreateReplicationJobRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string CreateReplicationJobRequest::getName()const
{
	return name_;
}

void CreateReplicationJobRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

int CreateReplicationJobRequest::getMaxNumberOfImageToKeep()const
{
	return maxNumberOfImageToKeep_;
}

void CreateReplicationJobRequest::setMaxNumberOfImageToKeep(int maxNumberOfImageToKeep)
{
	maxNumberOfImageToKeep_ = maxNumberOfImageToKeep;
	setCoreParameter("MaxNumberOfImageToKeep", std::to_string(maxNumberOfImageToKeep));
}

