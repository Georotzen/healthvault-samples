//
//  MHVPlanObjective.h
// MHVLib
//
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.
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

#import "MHVType.h"
#import "MHVStringNZNW.h"
#import "MHVPlanOutcome.h"
#import "MHVPlanObjectiveStateEnum.h"

@interface MHVPlanObjective : MHVType

@property (readwrite, nonatomic, strong) NSUUID *identifier;
@property (readwrite, nonatomic, strong) MHVStringNZNW *name;
@property (readwrite, nonatomic, strong) MHVStringNZNW *descriptionText;
@property (readwrite, nonatomic, strong) MHVPlanObjectiveStateEnum *state;
@property (readwrite, nonatomic, strong) MHVPlanOutcomeList *outcomes;

@end

@interface MHVPlanObjectiveList : MHVType

@property (readwrite, nonatomic, strong) NSArray<MHVPlanObjective *> *objective;

@end
