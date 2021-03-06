#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(dms-enterprise_public_header 
	include/alibabacloud/dms-enterprise/Dms_enterpriseClient.h
	include/alibabacloud/dms-enterprise/Dms_enterpriseExport.h )

set(dms-enterprise_public_header_model 
	include/alibabacloud/dms-enterprise/model/ApproveOrderRequest.h
	include/alibabacloud/dms-enterprise/model/ApproveOrderResult.h
	include/alibabacloud/dms-enterprise/model/CloseOrderRequest.h
	include/alibabacloud/dms-enterprise/model/CloseOrderResult.h
	include/alibabacloud/dms-enterprise/model/CreateOrderRequest.h
	include/alibabacloud/dms-enterprise/model/CreateOrderResult.h
	include/alibabacloud/dms-enterprise/model/CreatePublishGroupTaskRequest.h
	include/alibabacloud/dms-enterprise/model/CreatePublishGroupTaskResult.h
	include/alibabacloud/dms-enterprise/model/DeleteInstanceRequest.h
	include/alibabacloud/dms-enterprise/model/DeleteInstanceResult.h
	include/alibabacloud/dms-enterprise/model/DeleteUserRequest.h
	include/alibabacloud/dms-enterprise/model/DeleteUserResult.h
	include/alibabacloud/dms-enterprise/model/DisableUserRequest.h
	include/alibabacloud/dms-enterprise/model/DisableUserResult.h
	include/alibabacloud/dms-enterprise/model/EnableUserRequest.h
	include/alibabacloud/dms-enterprise/model/EnableUserResult.h
	include/alibabacloud/dms-enterprise/model/ExecuteDataCorrectRequest.h
	include/alibabacloud/dms-enterprise/model/ExecuteDataCorrectResult.h
	include/alibabacloud/dms-enterprise/model/ExecuteDataExportRequest.h
	include/alibabacloud/dms-enterprise/model/ExecuteDataExportResult.h
	include/alibabacloud/dms-enterprise/model/GetApprovalDetailRequest.h
	include/alibabacloud/dms-enterprise/model/GetApprovalDetailResult.h
	include/alibabacloud/dms-enterprise/model/GetDataCorrectBackupFilesRequest.h
	include/alibabacloud/dms-enterprise/model/GetDataCorrectBackupFilesResult.h
	include/alibabacloud/dms-enterprise/model/GetDataCorrectOrderDetailRequest.h
	include/alibabacloud/dms-enterprise/model/GetDataCorrectOrderDetailResult.h
	include/alibabacloud/dms-enterprise/model/GetDataExportDownloadURLRequest.h
	include/alibabacloud/dms-enterprise/model/GetDataExportDownloadURLResult.h
	include/alibabacloud/dms-enterprise/model/GetDataExportOrderDetailRequest.h
	include/alibabacloud/dms-enterprise/model/GetDataExportOrderDetailResult.h
	include/alibabacloud/dms-enterprise/model/GetDatabaseRequest.h
	include/alibabacloud/dms-enterprise/model/GetDatabaseResult.h
	include/alibabacloud/dms-enterprise/model/GetInstanceRequest.h
	include/alibabacloud/dms-enterprise/model/GetInstanceResult.h
	include/alibabacloud/dms-enterprise/model/GetLogicDatabaseRequest.h
	include/alibabacloud/dms-enterprise/model/GetLogicDatabaseResult.h
	include/alibabacloud/dms-enterprise/model/GetOpLogRequest.h
	include/alibabacloud/dms-enterprise/model/GetOpLogResult.h
	include/alibabacloud/dms-enterprise/model/GetOrderBaseInfoRequest.h
	include/alibabacloud/dms-enterprise/model/GetOrderBaseInfoResult.h
	include/alibabacloud/dms-enterprise/model/GetUserRequest.h
	include/alibabacloud/dms-enterprise/model/GetUserResult.h
	include/alibabacloud/dms-enterprise/model/GrantUserPermissionRequest.h
	include/alibabacloud/dms-enterprise/model/GrantUserPermissionResult.h
	include/alibabacloud/dms-enterprise/model/ListColumnsRequest.h
	include/alibabacloud/dms-enterprise/model/ListColumnsResult.h
	include/alibabacloud/dms-enterprise/model/ListDatabaseUserPermssionsRequest.h
	include/alibabacloud/dms-enterprise/model/ListDatabaseUserPermssionsResult.h
	include/alibabacloud/dms-enterprise/model/ListDatabasesRequest.h
	include/alibabacloud/dms-enterprise/model/ListDatabasesResult.h
	include/alibabacloud/dms-enterprise/model/ListIndexesRequest.h
	include/alibabacloud/dms-enterprise/model/ListIndexesResult.h
	include/alibabacloud/dms-enterprise/model/ListInstancesRequest.h
	include/alibabacloud/dms-enterprise/model/ListInstancesResult.h
	include/alibabacloud/dms-enterprise/model/ListLogicDatabasesRequest.h
	include/alibabacloud/dms-enterprise/model/ListLogicDatabasesResult.h
	include/alibabacloud/dms-enterprise/model/ListLogicTablesRequest.h
	include/alibabacloud/dms-enterprise/model/ListLogicTablesResult.h
	include/alibabacloud/dms-enterprise/model/ListOrdersRequest.h
	include/alibabacloud/dms-enterprise/model/ListOrdersResult.h
	include/alibabacloud/dms-enterprise/model/ListTablesRequest.h
	include/alibabacloud/dms-enterprise/model/ListTablesResult.h
	include/alibabacloud/dms-enterprise/model/ListUserPermissionsRequest.h
	include/alibabacloud/dms-enterprise/model/ListUserPermissionsResult.h
	include/alibabacloud/dms-enterprise/model/ListUsersRequest.h
	include/alibabacloud/dms-enterprise/model/ListUsersResult.h
	include/alibabacloud/dms-enterprise/model/ListWorkFlowNodesRequest.h
	include/alibabacloud/dms-enterprise/model/ListWorkFlowNodesResult.h
	include/alibabacloud/dms-enterprise/model/ListWorkFlowTemplatesRequest.h
	include/alibabacloud/dms-enterprise/model/ListWorkFlowTemplatesResult.h
	include/alibabacloud/dms-enterprise/model/RegisterInstanceRequest.h
	include/alibabacloud/dms-enterprise/model/RegisterInstanceResult.h
	include/alibabacloud/dms-enterprise/model/RegisterUserRequest.h
	include/alibabacloud/dms-enterprise/model/RegisterUserResult.h
	include/alibabacloud/dms-enterprise/model/RevokeUserPermissionRequest.h
	include/alibabacloud/dms-enterprise/model/RevokeUserPermissionResult.h
	include/alibabacloud/dms-enterprise/model/SearchDatabaseRequest.h
	include/alibabacloud/dms-enterprise/model/SearchDatabaseResult.h
	include/alibabacloud/dms-enterprise/model/SearchTableRequest.h
	include/alibabacloud/dms-enterprise/model/SearchTableResult.h
	include/alibabacloud/dms-enterprise/model/SetOwnersRequest.h
	include/alibabacloud/dms-enterprise/model/SetOwnersResult.h
	include/alibabacloud/dms-enterprise/model/SubmitOrderApprovalRequest.h
	include/alibabacloud/dms-enterprise/model/SubmitOrderApprovalResult.h
	include/alibabacloud/dms-enterprise/model/SyncDatabaseMetaRequest.h
	include/alibabacloud/dms-enterprise/model/SyncDatabaseMetaResult.h
	include/alibabacloud/dms-enterprise/model/SyncInstanceMetaRequest.h
	include/alibabacloud/dms-enterprise/model/SyncInstanceMetaResult.h
	include/alibabacloud/dms-enterprise/model/UpdateInstanceRequest.h
	include/alibabacloud/dms-enterprise/model/UpdateInstanceResult.h
	include/alibabacloud/dms-enterprise/model/UpdateUserRequest.h
	include/alibabacloud/dms-enterprise/model/UpdateUserResult.h )

set(dms-enterprise_src 
	src/Dms-enterpriseClient.cc
	src/model/ApproveOrderRequest.cc
	src/model/ApproveOrderResult.cc
	src/model/CloseOrderRequest.cc
	src/model/CloseOrderResult.cc
	src/model/CreateOrderRequest.cc
	src/model/CreateOrderResult.cc
	src/model/CreatePublishGroupTaskRequest.cc
	src/model/CreatePublishGroupTaskResult.cc
	src/model/DeleteInstanceRequest.cc
	src/model/DeleteInstanceResult.cc
	src/model/DeleteUserRequest.cc
	src/model/DeleteUserResult.cc
	src/model/DisableUserRequest.cc
	src/model/DisableUserResult.cc
	src/model/EnableUserRequest.cc
	src/model/EnableUserResult.cc
	src/model/ExecuteDataCorrectRequest.cc
	src/model/ExecuteDataCorrectResult.cc
	src/model/ExecuteDataExportRequest.cc
	src/model/ExecuteDataExportResult.cc
	src/model/GetApprovalDetailRequest.cc
	src/model/GetApprovalDetailResult.cc
	src/model/GetDataCorrectBackupFilesRequest.cc
	src/model/GetDataCorrectBackupFilesResult.cc
	src/model/GetDataCorrectOrderDetailRequest.cc
	src/model/GetDataCorrectOrderDetailResult.cc
	src/model/GetDataExportDownloadURLRequest.cc
	src/model/GetDataExportDownloadURLResult.cc
	src/model/GetDataExportOrderDetailRequest.cc
	src/model/GetDataExportOrderDetailResult.cc
	src/model/GetDatabaseRequest.cc
	src/model/GetDatabaseResult.cc
	src/model/GetInstanceRequest.cc
	src/model/GetInstanceResult.cc
	src/model/GetLogicDatabaseRequest.cc
	src/model/GetLogicDatabaseResult.cc
	src/model/GetOpLogRequest.cc
	src/model/GetOpLogResult.cc
	src/model/GetOrderBaseInfoRequest.cc
	src/model/GetOrderBaseInfoResult.cc
	src/model/GetUserRequest.cc
	src/model/GetUserResult.cc
	src/model/GrantUserPermissionRequest.cc
	src/model/GrantUserPermissionResult.cc
	src/model/ListColumnsRequest.cc
	src/model/ListColumnsResult.cc
	src/model/ListDatabaseUserPermssionsRequest.cc
	src/model/ListDatabaseUserPermssionsResult.cc
	src/model/ListDatabasesRequest.cc
	src/model/ListDatabasesResult.cc
	src/model/ListIndexesRequest.cc
	src/model/ListIndexesResult.cc
	src/model/ListInstancesRequest.cc
	src/model/ListInstancesResult.cc
	src/model/ListLogicDatabasesRequest.cc
	src/model/ListLogicDatabasesResult.cc
	src/model/ListLogicTablesRequest.cc
	src/model/ListLogicTablesResult.cc
	src/model/ListOrdersRequest.cc
	src/model/ListOrdersResult.cc
	src/model/ListTablesRequest.cc
	src/model/ListTablesResult.cc
	src/model/ListUserPermissionsRequest.cc
	src/model/ListUserPermissionsResult.cc
	src/model/ListUsersRequest.cc
	src/model/ListUsersResult.cc
	src/model/ListWorkFlowNodesRequest.cc
	src/model/ListWorkFlowNodesResult.cc
	src/model/ListWorkFlowTemplatesRequest.cc
	src/model/ListWorkFlowTemplatesResult.cc
	src/model/RegisterInstanceRequest.cc
	src/model/RegisterInstanceResult.cc
	src/model/RegisterUserRequest.cc
	src/model/RegisterUserResult.cc
	src/model/RevokeUserPermissionRequest.cc
	src/model/RevokeUserPermissionResult.cc
	src/model/SearchDatabaseRequest.cc
	src/model/SearchDatabaseResult.cc
	src/model/SearchTableRequest.cc
	src/model/SearchTableResult.cc
	src/model/SetOwnersRequest.cc
	src/model/SetOwnersResult.cc
	src/model/SubmitOrderApprovalRequest.cc
	src/model/SubmitOrderApprovalResult.cc
	src/model/SyncDatabaseMetaRequest.cc
	src/model/SyncDatabaseMetaResult.cc
	src/model/SyncInstanceMetaRequest.cc
	src/model/SyncInstanceMetaResult.cc
	src/model/UpdateInstanceRequest.cc
	src/model/UpdateInstanceResult.cc
	src/model/UpdateUserRequest.cc
	src/model/UpdateUserResult.cc )

add_library(dms-enterprise ${LIB_TYPE}
	${dms-enterprise_public_header}
	${dms-enterprise_public_header_model}
	${dms-enterprise_src})

set_target_properties(dms-enterprise
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dms-enterprise
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dms-enterprise
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DMS_ENTERPRISE_LIBRARY)
endif()

target_include_directories(dms-enterprise
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dms-enterprise
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dms-enterprise
		jsoncpp)
	target_include_directories(dms-enterprise
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dms-enterprise
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dms-enterprise
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dms-enterprise
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dms-enterprise
		jsoncpp)
endif()

install(FILES ${dms-enterprise_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dms-enterprise)
install(FILES ${dms-enterprise_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dms-enterprise/model)
install(TARGETS dms-enterprise
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)