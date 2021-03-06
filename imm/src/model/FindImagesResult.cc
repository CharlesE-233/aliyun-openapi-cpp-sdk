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

#include <alibabacloud/imm/model/FindImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

FindImagesResult::FindImagesResult() :
	ServiceResult()
{}

FindImagesResult::FindImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

FindImagesResult::~FindImagesResult()
{}

void FindImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagesNode = value["Images"]["ImagesItem"];
	for (auto valueImagesImagesItem : allImagesNode)
	{
		ImagesItem imagesObject;
		if(!valueImagesImagesItem["FacesModifyTime"].isNull())
			imagesObject.facesModifyTime = valueImagesImagesItem["FacesModifyTime"].asString();
		if(!valueImagesImagesItem["OCRModifyTime"].isNull())
			imagesObject.oCRModifyTime = valueImagesImagesItem["OCRModifyTime"].asString();
		if(!valueImagesImagesItem["OCRStatus"].isNull())
			imagesObject.oCRStatus = valueImagesImagesItem["OCRStatus"].asString();
		if(!valueImagesImagesItem["SourcePosition"].isNull())
			imagesObject.sourcePosition = valueImagesImagesItem["SourcePosition"].asString();
		if(!valueImagesImagesItem["Exif"].isNull())
			imagesObject.exif = valueImagesImagesItem["Exif"].asString();
		if(!valueImagesImagesItem["ImageUri"].isNull())
			imagesObject.imageUri = valueImagesImagesItem["ImageUri"].asString();
		if(!valueImagesImagesItem["ImageWidth"].isNull())
			imagesObject.imageWidth = std::stoi(valueImagesImagesItem["ImageWidth"].asString());
		if(!valueImagesImagesItem["ImageFormat"].isNull())
			imagesObject.imageFormat = valueImagesImagesItem["ImageFormat"].asString();
		if(!valueImagesImagesItem["SourceType"].isNull())
			imagesObject.sourceType = valueImagesImagesItem["SourceType"].asString();
		if(!valueImagesImagesItem["ModifyTime"].isNull())
			imagesObject.modifyTime = valueImagesImagesItem["ModifyTime"].asString();
		if(!valueImagesImagesItem["FileSize"].isNull())
			imagesObject.fileSize = std::stoi(valueImagesImagesItem["FileSize"].asString());
		if(!valueImagesImagesItem["SourceUri"].isNull())
			imagesObject.sourceUri = valueImagesImagesItem["SourceUri"].asString();
		if(!valueImagesImagesItem["CreateTime"].isNull())
			imagesObject.createTime = valueImagesImagesItem["CreateTime"].asString();
		if(!valueImagesImagesItem["FacesStatus"].isNull())
			imagesObject.facesStatus = valueImagesImagesItem["FacesStatus"].asString();
		if(!valueImagesImagesItem["RemarksA"].isNull())
			imagesObject.remarksA = valueImagesImagesItem["RemarksA"].asString();
		if(!valueImagesImagesItem["ImageHeight"].isNull())
			imagesObject.imageHeight = std::stoi(valueImagesImagesItem["ImageHeight"].asString());
		if(!valueImagesImagesItem["RemarksB"].isNull())
			imagesObject.remarksB = valueImagesImagesItem["RemarksB"].asString();
		if(!valueImagesImagesItem["ImageTime"].isNull())
			imagesObject.imageTime = valueImagesImagesItem["ImageTime"].asString();
		if(!valueImagesImagesItem["Orientation"].isNull())
			imagesObject.orientation = valueImagesImagesItem["Orientation"].asString();
		if(!valueImagesImagesItem["Location"].isNull())
			imagesObject.location = valueImagesImagesItem["Location"].asString();
		if(!valueImagesImagesItem["OCRFailReason"].isNull())
			imagesObject.oCRFailReason = valueImagesImagesItem["OCRFailReason"].asString();
		if(!valueImagesImagesItem["FacesFailReason"].isNull())
			imagesObject.facesFailReason = valueImagesImagesItem["FacesFailReason"].asString();
		if(!valueImagesImagesItem["TagsFailReason"].isNull())
			imagesObject.tagsFailReason = valueImagesImagesItem["TagsFailReason"].asString();
		if(!valueImagesImagesItem["TagsModifyTime"].isNull())
			imagesObject.tagsModifyTime = valueImagesImagesItem["TagsModifyTime"].asString();
		if(!valueImagesImagesItem["CelebrityStatus"].isNull())
			imagesObject.celebrityStatus = valueImagesImagesItem["CelebrityStatus"].asString();
		if(!valueImagesImagesItem["CelebrityModifyTime"].isNull())
			imagesObject.celebrityModifyTime = valueImagesImagesItem["CelebrityModifyTime"].asString();
		if(!valueImagesImagesItem["CelebrityFailReason"].isNull())
			imagesObject.celebrityFailReason = valueImagesImagesItem["CelebrityFailReason"].asString();
		if(!valueImagesImagesItem["TagsStatus"].isNull())
			imagesObject.tagsStatus = valueImagesImagesItem["TagsStatus"].asString();
		if(!valueImagesImagesItem["RemarksC"].isNull())
			imagesObject.remarksC = valueImagesImagesItem["RemarksC"].asString();
		if(!valueImagesImagesItem["RemarksD"].isNull())
			imagesObject.remarksD = valueImagesImagesItem["RemarksD"].asString();
		if(!valueImagesImagesItem["ExternalId"].isNull())
			imagesObject.externalId = valueImagesImagesItem["ExternalId"].asString();
		if(!valueImagesImagesItem["AddressModifyTime"].isNull())
			imagesObject.addressModifyTime = valueImagesImagesItem["AddressModifyTime"].asString();
		if(!valueImagesImagesItem["AddressStatus"].isNull())
			imagesObject.addressStatus = valueImagesImagesItem["AddressStatus"].asString();
		if(!valueImagesImagesItem["AddressFailReason"].isNull())
			imagesObject.addressFailReason = valueImagesImagesItem["AddressFailReason"].asString();
		auto allFacesNode = allImagesNode["Faces"]["FacesItem"];
		for (auto allImagesNodeFacesFacesItem : allFacesNode)
		{
			ImagesItem::FacesItem facesObject;
			if(!allImagesNodeFacesFacesItem["Age"].isNull())
				facesObject.age = std::stoi(allImagesNodeFacesFacesItem["Age"].asString());
			if(!allImagesNodeFacesFacesItem["GenderConfidence"].isNull())
				facesObject.genderConfidence = std::stof(allImagesNodeFacesFacesItem["GenderConfidence"].asString());
			if(!allImagesNodeFacesFacesItem["Attractive"].isNull())
				facesObject.attractive = std::stof(allImagesNodeFacesFacesItem["Attractive"].asString());
			if(!allImagesNodeFacesFacesItem["Gender"].isNull())
				facesObject.gender = allImagesNodeFacesFacesItem["Gender"].asString();
			if(!allImagesNodeFacesFacesItem["FaceConfidence"].isNull())
				facesObject.faceConfidence = std::stof(allImagesNodeFacesFacesItem["FaceConfidence"].asString());
			if(!allImagesNodeFacesFacesItem["Emotion"].isNull())
				facesObject.emotion = allImagesNodeFacesFacesItem["Emotion"].asString();
			if(!allImagesNodeFacesFacesItem["FaceId"].isNull())
				facesObject.faceId = allImagesNodeFacesFacesItem["FaceId"].asString();
			if(!allImagesNodeFacesFacesItem["EmotionConfidence"].isNull())
				facesObject.emotionConfidence = std::stof(allImagesNodeFacesFacesItem["EmotionConfidence"].asString());
			if(!allImagesNodeFacesFacesItem["GroupId"].isNull())
				facesObject.groupId = allImagesNodeFacesFacesItem["GroupId"].asString();
			if(!allImagesNodeFacesFacesItem["FaceQuality"].isNull())
				facesObject.faceQuality = std::stof(allImagesNodeFacesFacesItem["FaceQuality"].asString());
			auto emotionDetailsNode = value["EmotionDetails"];
			if(!emotionDetailsNode["SAD"].isNull())
				facesObject.emotionDetails.sAD = std::stof(emotionDetailsNode["SAD"].asString());
			if(!emotionDetailsNode["CALM"].isNull())
				facesObject.emotionDetails.cALM = std::stof(emotionDetailsNode["CALM"].asString());
			if(!emotionDetailsNode["ANGRY"].isNull())
				facesObject.emotionDetails.aNGRY = std::stof(emotionDetailsNode["ANGRY"].asString());
			if(!emotionDetailsNode["HAPPY"].isNull())
				facesObject.emotionDetails.hAPPY = std::stof(emotionDetailsNode["HAPPY"].asString());
			if(!emotionDetailsNode["SCARED"].isNull())
				facesObject.emotionDetails.sCARED = std::stof(emotionDetailsNode["SCARED"].asString());
			if(!emotionDetailsNode["DISGUSTED"].isNull())
				facesObject.emotionDetails.dISGUSTED = std::stof(emotionDetailsNode["DISGUSTED"].asString());
			if(!emotionDetailsNode["SURPRISED"].isNull())
				facesObject.emotionDetails.sURPRISED = std::stof(emotionDetailsNode["SURPRISED"].asString());
			auto faceAttributesNode = value["FaceAttributes"];
			if(!faceAttributesNode["GlassesConfidence"].isNull())
				facesObject.faceAttributes.glassesConfidence = std::stof(faceAttributesNode["GlassesConfidence"].asString());
			if(!faceAttributesNode["Glasses"].isNull())
				facesObject.faceAttributes.glasses = faceAttributesNode["Glasses"].asString();
			if(!faceAttributesNode["RaceConfidence"].isNull())
				facesObject.faceAttributes.raceConfidence = std::stof(faceAttributesNode["RaceConfidence"].asString());
			if(!faceAttributesNode["Beard"].isNull())
				facesObject.faceAttributes.beard = faceAttributesNode["Beard"].asString();
			if(!faceAttributesNode["MaskConfidence"].isNull())
				facesObject.faceAttributes.maskConfidence = std::stof(faceAttributesNode["MaskConfidence"].asString());
			if(!faceAttributesNode["Race"].isNull())
				facesObject.faceAttributes.race = faceAttributesNode["Race"].asString();
			if(!faceAttributesNode["BeardConfidence"].isNull())
				facesObject.faceAttributes.beardConfidence = std::stof(faceAttributesNode["BeardConfidence"].asString());
			if(!faceAttributesNode["Mask"].isNull())
				facesObject.faceAttributes.mask = faceAttributesNode["Mask"].asString();
			auto faceBoundaryNode = faceAttributesNode["FaceBoundary"];
			if(!faceBoundaryNode["Top"].isNull())
				facesObject.faceAttributes.faceBoundary.top = std::stoi(faceBoundaryNode["Top"].asString());
			if(!faceBoundaryNode["Height"].isNull())
				facesObject.faceAttributes.faceBoundary.height = std::stoi(faceBoundaryNode["Height"].asString());
			if(!faceBoundaryNode["Width"].isNull())
				facesObject.faceAttributes.faceBoundary.width = std::stoi(faceBoundaryNode["Width"].asString());
			if(!faceBoundaryNode["Left"].isNull())
				facesObject.faceAttributes.faceBoundary.left = std::stoi(faceBoundaryNode["Left"].asString());
			auto headPoseNode = faceAttributesNode["HeadPose"];
			if(!headPoseNode["Pitch"].isNull())
				facesObject.faceAttributes.headPose.pitch = std::stof(headPoseNode["Pitch"].asString());
			if(!headPoseNode["Roll"].isNull())
				facesObject.faceAttributes.headPose.roll = std::stof(headPoseNode["Roll"].asString());
			if(!headPoseNode["Yaw"].isNull())
				facesObject.faceAttributes.headPose.yaw = std::stof(headPoseNode["Yaw"].asString());
			imagesObject.faces.push_back(facesObject);
		}
		auto allTagsNode = allImagesNode["Tags"]["TagsItem"];
		for (auto allImagesNodeTagsTagsItem : allTagsNode)
		{
			ImagesItem::TagsItem tagsObject;
			if(!allImagesNodeTagsTagsItem["TagConfidence"].isNull())
				tagsObject.tagConfidence = std::stof(allImagesNodeTagsTagsItem["TagConfidence"].asString());
			if(!allImagesNodeTagsTagsItem["TagLevel"].isNull())
				tagsObject.tagLevel = std::stoi(allImagesNodeTagsTagsItem["TagLevel"].asString());
			if(!allImagesNodeTagsTagsItem["TagName"].isNull())
				tagsObject.tagName = allImagesNodeTagsTagsItem["TagName"].asString();
			if(!allImagesNodeTagsTagsItem["ParentTagName"].isNull())
				tagsObject.parentTagName = allImagesNodeTagsTagsItem["ParentTagName"].asString();
			imagesObject.tags.push_back(tagsObject);
		}
		auto allOCRNode = allImagesNode["OCR"]["OCRItem"];
		for (auto allImagesNodeOCROCRItem : allOCRNode)
		{
			ImagesItem::OCRItem oCRObject;
			if(!allImagesNodeOCROCRItem["OCRContents"].isNull())
				oCRObject.oCRContents = allImagesNodeOCROCRItem["OCRContents"].asString();
			if(!allImagesNodeOCROCRItem["OCRConfidence"].isNull())
				oCRObject.oCRConfidence = std::stof(allImagesNodeOCROCRItem["OCRConfidence"].asString());
			auto oCRBoundaryNode = value["OCRBoundary"];
			if(!oCRBoundaryNode["Left"].isNull())
				oCRObject.oCRBoundary.left = std::stoi(oCRBoundaryNode["Left"].asString());
			if(!oCRBoundaryNode["Left"].isNull())
				oCRObject.oCRBoundary.left1 = std::stoi(oCRBoundaryNode["Left"].asString());
			if(!oCRBoundaryNode["Width"].isNull())
				oCRObject.oCRBoundary.width = std::stoi(oCRBoundaryNode["Width"].asString());
			if(!oCRBoundaryNode["Height"].isNull())
				oCRObject.oCRBoundary.height = std::stoi(oCRBoundaryNode["Height"].asString());
			imagesObject.oCR.push_back(oCRObject);
		}
		auto allCelebrityNode = allImagesNode["Celebrity"]["CelebrityItem"];
		for (auto allImagesNodeCelebrityCelebrityItem : allCelebrityNode)
		{
			ImagesItem::CelebrityItem celebrityObject;
			if(!allImagesNodeCelebrityCelebrityItem["CelebrityName"].isNull())
				celebrityObject.celebrityName = allImagesNodeCelebrityCelebrityItem["CelebrityName"].asString();
			if(!allImagesNodeCelebrityCelebrityItem["CelebrityGender"].isNull())
				celebrityObject.celebrityGender = allImagesNodeCelebrityCelebrityItem["CelebrityGender"].asString();
			if(!allImagesNodeCelebrityCelebrityItem["CelebrityConfidence"].isNull())
				celebrityObject.celebrityConfidence = std::stof(allImagesNodeCelebrityCelebrityItem["CelebrityConfidence"].asString());
			if(!allImagesNodeCelebrityCelebrityItem["CelebrityLibraryName"].isNull())
				celebrityObject.celebrityLibraryName = allImagesNodeCelebrityCelebrityItem["CelebrityLibraryName"].asString();
			auto celebrityBoundaryNode = value["CelebrityBoundary"];
			if(!celebrityBoundaryNode["Left"].isNull())
				celebrityObject.celebrityBoundary.left = std::stoi(celebrityBoundaryNode["Left"].asString());
			if(!celebrityBoundaryNode["Top"].isNull())
				celebrityObject.celebrityBoundary.top = std::stoi(celebrityBoundaryNode["Top"].asString());
			if(!celebrityBoundaryNode["Width"].isNull())
				celebrityObject.celebrityBoundary.width = std::stoi(celebrityBoundaryNode["Width"].asString());
			if(!celebrityBoundaryNode["Height"].isNull())
				celebrityObject.celebrityBoundary.height = std::stoi(celebrityBoundaryNode["Height"].asString());
			imagesObject.celebrity.push_back(celebrityObject);
		}
		auto addressNode = value["Address"];
		if(!addressNode["AddressLine"].isNull())
			imagesObject.address.addressLine = addressNode["AddressLine"].asString();
		if(!addressNode["Country"].isNull())
			imagesObject.address.country = addressNode["Country"].asString();
		if(!addressNode["Province"].isNull())
			imagesObject.address.province = addressNode["Province"].asString();
		if(!addressNode["City"].isNull())
			imagesObject.address.city = addressNode["City"].asString();
		if(!addressNode["District"].isNull())
			imagesObject.address.district = addressNode["District"].asString();
		if(!addressNode["Township"].isNull())
			imagesObject.address.township = addressNode["Township"].asString();
		images_.push_back(imagesObject);
	}
	if(!value["SetId"].isNull())
		setId_ = value["SetId"].asString();
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();

}

std::vector<FindImagesResult::ImagesItem> FindImagesResult::getImages()const
{
	return images_;
}

std::string FindImagesResult::getSetId()const
{
	return setId_;
}

std::string FindImagesResult::getNextMarker()const
{
	return nextMarker_;
}

