/* Copyright (c) 2016 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GTLServiceRegistryOperationsListResponse.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Google Cloud Service Registry API (serviceregistry/alpha)
// Description:
//   Manages service endpoints in Service Registry and provides integration with
//   DNS for service discovery and name resolution.
// Documentation:
//   https://cloud.google.com/service-registry/
// Classes:
//   GTLServiceRegistryOperationsListResponse (0 custom class methods, 2 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLServiceRegistryOperation;

// ----------------------------------------------------------------------------
//
//   GTLServiceRegistryOperationsListResponse
//

// A response containing a partial list of operations and a page token used to
// build the next request if the request has been truncated.

@interface GTLServiceRegistryOperationsListResponse : GTLObject

// [Output Only] A token used to continue a truncated list request.
@property (nonatomic, copy) NSString *nextPageToken;

// [Output Only] Operations contained in this list response.
@property (nonatomic, retain) NSArray *operations;  // of GTLServiceRegistryOperation

@end
