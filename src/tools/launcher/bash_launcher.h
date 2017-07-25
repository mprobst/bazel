// Copyright 2017 The Bazel Authors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef BAZEL_SRC_TOOLS_LAUNCHER_BASH_LAUNCHER_H_
#define BAZEL_SRC_TOOLS_LAUNCHER_BASH_LAUNCHER_H_

#include "src/tools/launcher/launcher.h"

namespace bazel {
namespace launcher {

static constexpr const char* BASH_BIN_PATH = "bash_bin_path";
static constexpr const char* BASH_MAIN_FILE = "bash_main_file";

class BashBinaryLauncher : public BinaryLauncherBase {
 public:
  BashBinaryLauncher(const LaunchDataParser::LaunchInfo& launch_info, int argc,
                     char* argv[])
      : BinaryLauncherBase(launch_info, argc, argv){}
  ExitCode Launch();
};

}  // namespace launcher
}  // namespace bazel

#endif  // BAZEL_SRC_TOOLS_LAUNCHER_BASH_LAUNCHER_H_