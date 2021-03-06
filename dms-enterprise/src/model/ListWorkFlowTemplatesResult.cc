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

#include <alibabacloud/dms-enterprise/model/ListWorkFlowTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListWorkFlowTemplatesResult::ListWorkFlowTemplatesResult() :
	ServiceResult()
{}

ListWorkFlowTemplatesResult::ListWorkFlowTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWorkFlowTemplatesResult::~ListWorkFlowTemplatesResult()
{}

void ListWorkFlowTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWorkFlowTemplatesNode = value["WorkFlowTemplates"]["WorkFlowTemplate"];
	for (auto valueWorkFlowTemplatesWorkFlowTemplate : allWorkFlowTemplatesNode)
	{
		WorkFlowTemplate workFlowTemplatesObject;
		if(!valueWorkFlowTemplatesWorkFlowTemplate["TemplateName"].isNull())
			workFlowTemplatesObject.templateName = valueWorkFlowTemplatesWorkFlowTemplate["TemplateName"].asString();
		if(!valueWorkFlowTemplatesWorkFlowTemplate["Comment"].isNull())
			workFlowTemplatesObject.comment = valueWorkFlowTemplatesWorkFlowTemplate["Comment"].asString();
		if(!valueWorkFlowTemplatesWorkFlowTemplate["TemplateId"].isNull())
			workFlowTemplatesObject.templateId = std::stol(valueWorkFlowTemplatesWorkFlowTemplate["TemplateId"].asString());
		if(!valueWorkFlowTemplatesWorkFlowTemplate["IsSystem"].isNull())
			workFlowTemplatesObject.isSystem = std::stoi(valueWorkFlowTemplatesWorkFlowTemplate["IsSystem"].asString());
		if(!valueWorkFlowTemplatesWorkFlowTemplate["Enabled"].isNull())
			workFlowTemplatesObject.enabled = valueWorkFlowTemplatesWorkFlowTemplate["Enabled"].asString();
		auto allWorkflowNodesNode = allWorkFlowTemplatesNode["WorkflowNodes"]["WorkflowNode"];
		for (auto allWorkFlowTemplatesNodeWorkflowNodesWorkflowNode : allWorkflowNodesNode)
		{
			WorkFlowTemplate::WorkflowNode workflowNodesObject;
			if(!allWorkFlowTemplatesNodeWorkflowNodesWorkflowNode["NodeId"].isNull())
				workflowNodesObject.nodeId = std::stol(allWorkFlowTemplatesNodeWorkflowNodesWorkflowNode["NodeId"].asString());
			if(!allWorkFlowTemplatesNodeWorkflowNodesWorkflowNode["TemplateId"].isNull())
				workflowNodesObject.templateId = std::stol(allWorkFlowTemplatesNodeWorkflowNodesWorkflowNode["TemplateId"].asString());
			if(!allWorkFlowTemplatesNodeWorkflowNodesWorkflowNode["NodeName"].isNull())
				workflowNodesObject.nodeName = allWorkFlowTemplatesNodeWorkflowNodesWorkflowNode["NodeName"].asString();
			if(!allWorkFlowTemplatesNodeWorkflowNodesWorkflowNode["NodeType"].isNull())
				workflowNodesObject.nodeType = allWorkFlowTemplatesNodeWorkflowNodesWorkflowNode["NodeType"].asString();
			if(!allWorkFlowTemplatesNodeWorkflowNodesWorkflowNode["Comment"].isNull())
				workflowNodesObject.comment = allWorkFlowTemplatesNodeWorkflowNodesWorkflowNode["Comment"].asString();
			if(!allWorkFlowTemplatesNodeWorkflowNodesWorkflowNode["Position"].isNull())
				workflowNodesObject.position = std::stoi(allWorkFlowTemplatesNodeWorkflowNodesWorkflowNode["Position"].asString());
			workFlowTemplatesObject.workflowNodes.push_back(workflowNodesObject);
		}
		workFlowTemplates_.push_back(workFlowTemplatesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::string ListWorkFlowTemplatesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListWorkFlowTemplatesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListWorkFlowTemplatesResult::getSuccess()const
{
	return success_;
}

std::vector<ListWorkFlowTemplatesResult::WorkFlowTemplate> ListWorkFlowTemplatesResult::getWorkFlowTemplates()const
{
	return workFlowTemplates_;
}

