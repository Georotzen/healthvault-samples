//
// MHVHttpTaskProtocol.h
// MHVLib
//
//  Copyright (c) 2017 Microsoft Corporation. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol MHVHttpTaskProtocol <NSObject>

/**
 Observable progress value.  Range is from 0.0 to 1.0
 */
@property (nonatomic, assign, readonly) double progress;

/**
 Cancels task(s)
 */
- (void)cancel;

@end

NS_ASSUME_NONNULL_END
