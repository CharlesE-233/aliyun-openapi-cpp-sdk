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

#include <alibabacloud/acm/AcmClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Acm;
using namespace AlibabaCloud::Acm::Model;

namespace
{
	const std::string SERVICE_NAME = "acm";
}

AcmClient::AcmClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "acms");
}

AcmClient::AcmClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "acms");
}

AcmClient::AcmClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RoaServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "acms");
}

AcmClient::~AcmClient()
{}

AcmClient::CreateConfigurationOutcome AcmClient::createConfiguration(const CreateConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateConfigurationOutcome(CreateConfigurationResult(outcome.result()));
	else
		return CreateConfigurationOutcome(outcome.error());
}

void AcmClient::createConfigurationAsync(const CreateConfigurationRequest& request, const CreateConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AcmClient::CreateConfigurationOutcomeCallable AcmClient::createConfigurationCallable(const CreateConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateConfigurationOutcome()>>(
			[this, request]()
			{
			return this->createConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AcmClient::CreateNamespaceOutcome AcmClient::createNamespace(const CreateNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNamespaceOutcome(CreateNamespaceResult(outcome.result()));
	else
		return CreateNamespaceOutcome(outcome.error());
}

void AcmClient::createNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AcmClient::CreateNamespaceOutcomeCallable AcmClient::createNamespaceCallable(const CreateNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNamespaceOutcome()>>(
			[this, request]()
			{
			return this->createNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AcmClient::DeleteConfigurationOutcome AcmClient::deleteConfiguration(const DeleteConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteConfigurationOutcome(DeleteConfigurationResult(outcome.result()));
	else
		return DeleteConfigurationOutcome(outcome.error());
}

void AcmClient::deleteConfigurationAsync(const DeleteConfigurationRequest& request, const DeleteConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AcmClient::DeleteConfigurationOutcomeCallable AcmClient::deleteConfigurationCallable(const DeleteConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteConfigurationOutcome()>>(
			[this, request]()
			{
			return this->deleteConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AcmClient::DeleteNamespaceOutcome AcmClient::deleteNamespace(const DeleteNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteNamespaceOutcome(DeleteNamespaceResult(outcome.result()));
	else
		return DeleteNamespaceOutcome(outcome.error());
}

void AcmClient::deleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AcmClient::DeleteNamespaceOutcomeCallable AcmClient::deleteNamespaceCallable(const DeleteNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteNamespaceOutcome()>>(
			[this, request]()
			{
			return this->deleteNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AcmClient::DeployConfigurationOutcome AcmClient::deployConfiguration(const DeployConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeployConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeployConfigurationOutcome(DeployConfigurationResult(outcome.result()));
	else
		return DeployConfigurationOutcome(outcome.error());
}

void AcmClient::deployConfigurationAsync(const DeployConfigurationRequest& request, const DeployConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deployConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AcmClient::DeployConfigurationOutcomeCallable AcmClient::deployConfigurationCallable(const DeployConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeployConfigurationOutcome()>>(
			[this, request]()
			{
			return this->deployConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AcmClient::DescribeConfigurationOutcome AcmClient::describeConfiguration(const DescribeConfigurationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeConfigurationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeConfigurationOutcome(DescribeConfigurationResult(outcome.result()));
	else
		return DescribeConfigurationOutcome(outcome.error());
}

void AcmClient::describeConfigurationAsync(const DescribeConfigurationRequest& request, const DescribeConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeConfiguration(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AcmClient::DescribeConfigurationOutcomeCallable AcmClient::describeConfigurationCallable(const DescribeConfigurationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeConfigurationOutcome()>>(
			[this, request]()
			{
			return this->describeConfiguration(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AcmClient::DescribeNamespaceOutcome AcmClient::describeNamespace(const DescribeNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeNamespaceOutcome(DescribeNamespaceResult(outcome.result()));
	else
		return DescribeNamespaceOutcome(outcome.error());
}

void AcmClient::describeNamespaceAsync(const DescribeNamespaceRequest& request, const DescribeNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AcmClient::DescribeNamespaceOutcomeCallable AcmClient::describeNamespaceCallable(const DescribeNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeNamespaceOutcome()>>(
			[this, request]()
			{
			return this->describeNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

AcmClient::UpdateNamespaceOutcome AcmClient::updateNamespace(const UpdateNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateNamespaceOutcome(UpdateNamespaceResult(outcome.result()));
	else
		return UpdateNamespaceOutcome(outcome.error());
}

void AcmClient::updateNamespaceAsync(const UpdateNamespaceRequest& request, const UpdateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

AcmClient::UpdateNamespaceOutcomeCallable AcmClient::updateNamespaceCallable(const UpdateNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateNamespaceOutcome()>>(
			[this, request]()
			{
			return this->updateNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

