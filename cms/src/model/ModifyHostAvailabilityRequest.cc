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

#include <alibabacloud/cms/model/ModifyHostAvailabilityRequest.h>

using AlibabaCloud::Cms::Model::ModifyHostAvailabilityRequest;

ModifyHostAvailabilityRequest::ModifyHostAvailabilityRequest() :
	RpcServiceRequest("cms", "2019-01-01", "ModifyHostAvailability")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyHostAvailabilityRequest::~ModifyHostAvailabilityRequest()
{}

std::string ModifyHostAvailabilityRequest::getTaskOptionHttpMethod()const
{
	return taskOptionHttpMethod_;
}

void ModifyHostAvailabilityRequest::setTaskOptionHttpMethod(const std::string& taskOptionHttpMethod)
{
	taskOptionHttpMethod_ = taskOptionHttpMethod;
	setCoreParameter("TaskOptionHttpMethod", taskOptionHttpMethod);
}

std::vector<ModifyHostAvailabilityRequest::AlertConfigEscalationList> ModifyHostAvailabilityRequest::getAlertConfigEscalationList()const
{
	return alertConfigEscalationList_;
}

void ModifyHostAvailabilityRequest::setAlertConfigEscalationList(const std::vector<AlertConfigEscalationList>& alertConfigEscalationList)
{
	alertConfigEscalationList_ = alertConfigEscalationList;
	for(int dep1 = 0; dep1!= alertConfigEscalationList.size(); dep1++) {
		auto alertConfigEscalationListObj = alertConfigEscalationList.at(dep1);
		std::string alertConfigEscalationListObjStr = "AlertConfigEscalationList." + std::to_string(dep1);
		setCoreParameter(alertConfigEscalationListObjStr + ".Times", std::to_string(alertConfigEscalationListObj.times));
		setCoreParameter(alertConfigEscalationListObjStr + ".MetricName", alertConfigEscalationListObj.metricName);
		setCoreParameter(alertConfigEscalationListObjStr + ".Value", alertConfigEscalationListObj.value);
		setCoreParameter(alertConfigEscalationListObjStr + "._Operator", alertConfigEscalationListObj._operator);
		setCoreParameter(alertConfigEscalationListObjStr + ".Aggregate", alertConfigEscalationListObj.aggregate);
	}
}

std::string ModifyHostAvailabilityRequest::getTaskName()const
{
	return taskName_;
}

void ModifyHostAvailabilityRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setCoreParameter("TaskName", taskName);
}

int ModifyHostAvailabilityRequest::getAlertConfigSilenceTime()const
{
	return alertConfigSilenceTime_;
}

void ModifyHostAvailabilityRequest::setAlertConfigSilenceTime(int alertConfigSilenceTime)
{
	alertConfigSilenceTime_ = alertConfigSilenceTime;
	setCoreParameter("AlertConfigSilenceTime", std::to_string(alertConfigSilenceTime));
}

std::string ModifyHostAvailabilityRequest::getTaskOptionHttpResponseCharset()const
{
	return taskOptionHttpResponseCharset_;
}

void ModifyHostAvailabilityRequest::setTaskOptionHttpResponseCharset(const std::string& taskOptionHttpResponseCharset)
{
	taskOptionHttpResponseCharset_ = taskOptionHttpResponseCharset;
	setCoreParameter("TaskOptionHttpResponseCharset", taskOptionHttpResponseCharset);
}

bool ModifyHostAvailabilityRequest::getTaskOptionHttpNegative()const
{
	return taskOptionHttpNegative_;
}

void ModifyHostAvailabilityRequest::setTaskOptionHttpNegative(bool taskOptionHttpNegative)
{
	taskOptionHttpNegative_ = taskOptionHttpNegative;
	setCoreParameter("TaskOptionHttpNegative", taskOptionHttpNegative ? "true" : "false");
}

int ModifyHostAvailabilityRequest::getAlertConfigNotifyType()const
{
	return alertConfigNotifyType_;
}

void ModifyHostAvailabilityRequest::setAlertConfigNotifyType(int alertConfigNotifyType)
{
	alertConfigNotifyType_ = alertConfigNotifyType;
	setCoreParameter("AlertConfigNotifyType", std::to_string(alertConfigNotifyType));
}

std::string ModifyHostAvailabilityRequest::getTaskOptionTelnetOrPingHost()const
{
	return taskOptionTelnetOrPingHost_;
}

void ModifyHostAvailabilityRequest::setTaskOptionTelnetOrPingHost(const std::string& taskOptionTelnetOrPingHost)
{
	taskOptionTelnetOrPingHost_ = taskOptionTelnetOrPingHost;
	setCoreParameter("TaskOptionTelnetOrPingHost", taskOptionTelnetOrPingHost);
}

std::string ModifyHostAvailabilityRequest::getTaskOptionHttpResponseMatchContent()const
{
	return taskOptionHttpResponseMatchContent_;
}

void ModifyHostAvailabilityRequest::setTaskOptionHttpResponseMatchContent(const std::string& taskOptionHttpResponseMatchContent)
{
	taskOptionHttpResponseMatchContent_ = taskOptionHttpResponseMatchContent;
	setCoreParameter("TaskOptionHttpResponseMatchContent", taskOptionHttpResponseMatchContent);
}

long ModifyHostAvailabilityRequest::getId()const
{
	return id_;
}

void ModifyHostAvailabilityRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::vector<std::string> ModifyHostAvailabilityRequest::getInstanceList()const
{
	return instanceList_;
}

void ModifyHostAvailabilityRequest::setInstanceList(const std::vector<std::string>& instanceList)
{
	instanceList_ = instanceList;
	for(int dep1 = 0; dep1!= instanceList.size(); dep1++) {
		setCoreParameter("InstanceList."+ std::to_string(dep1), instanceList.at(dep1));
	}
}

long ModifyHostAvailabilityRequest::getGroupId()const
{
	return groupId_;
}

void ModifyHostAvailabilityRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

int ModifyHostAvailabilityRequest::getAlertConfigEndTime()const
{
	return alertConfigEndTime_;
}

void ModifyHostAvailabilityRequest::setAlertConfigEndTime(int alertConfigEndTime)
{
	alertConfigEndTime_ = alertConfigEndTime;
	setCoreParameter("AlertConfigEndTime", std::to_string(alertConfigEndTime));
}

std::string ModifyHostAvailabilityRequest::getTaskOptionHttpURI()const
{
	return taskOptionHttpURI_;
}

void ModifyHostAvailabilityRequest::setTaskOptionHttpURI(const std::string& taskOptionHttpURI)
{
	taskOptionHttpURI_ = taskOptionHttpURI;
	setCoreParameter("TaskOptionHttpURI", taskOptionHttpURI);
}

std::string ModifyHostAvailabilityRequest::getTaskScope()const
{
	return taskScope_;
}

void ModifyHostAvailabilityRequest::setTaskScope(const std::string& taskScope)
{
	taskScope_ = taskScope;
	setCoreParameter("TaskScope", taskScope);
}

int ModifyHostAvailabilityRequest::getAlertConfigStartTime()const
{
	return alertConfigStartTime_;
}

void ModifyHostAvailabilityRequest::setAlertConfigStartTime(int alertConfigStartTime)
{
	alertConfigStartTime_ = alertConfigStartTime;
	setCoreParameter("AlertConfigStartTime", std::to_string(alertConfigStartTime));
}

std::string ModifyHostAvailabilityRequest::getAlertConfigWebHook()const
{
	return alertConfigWebHook_;
}

void ModifyHostAvailabilityRequest::setAlertConfigWebHook(const std::string& alertConfigWebHook)
{
	alertConfigWebHook_ = alertConfigWebHook;
	setCoreParameter("AlertConfigWebHook", alertConfigWebHook);
}

