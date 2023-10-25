workspace(name = "xnnpack")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Bazel rule definitions
http_archive(
    name = "rules_cc",
    strip_prefix = "rules_cc-main",
    urls = ["https://github.com/bazelbuild/rules_cc/archive/main.zip"],
)

# Bazel Skylib.
http_archive(
    name = "bazel_skylib",
    sha256 = "f7be3474d42aae265405a592bb7da8e171919d74c16f082a5457840f06054728",
    urls = [
        "https://mirror.bazel.build/github.com/bazelbuild/bazel-skylib/releases/download/1.2.1/bazel-skylib-1.2.1.tar.gz",
        "https://github.com/bazelbuild/bazel-skylib/releases/download/1.2.1/bazel-skylib-1.2.1.tar.gz",
    ],
)

# Google Test framework, used by most unit-tests.
http_archive(
    name = "com_google_googletest",
    sha256 = "5cb522f1427558c6df572d6d0e1bf0fd076428633d080e88ad5312be0b6a8859",
    strip_prefix = "googletest-e23cdb78e9fef1f69a9ef917f447add5638daf2a",
    urls = ["https://github.com/google/googletest/archive/e23cdb78e9fef1f69a9ef917f447add5638daf2a.zip"],
)

# Google Benchmark library, used in micro-benchmarks.
http_archive(
    name = "com_google_benchmark",
    sha256 = "1ba14374fddcd9623f126b1a60945e4deac4cdc4fb25a5f25e7f779e36f2db52",
    strip_prefix = "benchmark-d2a8a4ee41b923876c034afb939c4fc03598e622",
    urls = ["https://github.com/google/benchmark/archive/d2a8a4ee41b923876c034afb939c4fc03598e622.zip"],
)

# FP16 library, used for half-precision conversions
http_archive(
    name = "FP16",
    build_file = "@//third_party:FP16.BUILD",
    sha256 = "e66e65515fa09927b348d3d584c68be4215cfe664100d01c9dbc7655a5716d70",
    strip_prefix = "FP16-0a92994d729ff76a58f692d3028ca1b64b145d91",
    urls = [
        "https://github.com/Maratyszcza/FP16/archive/0a92994d729ff76a58f692d3028ca1b64b145d91.zip",
    ],
)

# FXdiv library, used for repeated integer division by the same factor
http_archive(
    name = "FXdiv",
    sha256 = "ab7dfb08829bee33dca38405d647868fb214ac685e379ec7ef2bebcd234cd44d",
    strip_prefix = "FXdiv-b408327ac2a15ec3e43352421954f5b1967701d1",
    urls = ["https://github.com/Maratyszcza/FXdiv/archive/b408327ac2a15ec3e43352421954f5b1967701d1.zip"],
)

# LINT.IfChange
# pthreadpool library, used for parallelization
http_archive(
    name = "pthreadpool",
    sha256 = "30cb30fb77cd903eda901651e63be8db5e2e33b1d06e4bbdd3f90a9a4432ae9a",
    strip_prefix = "pthreadpool-b1b6536539d5ec04416d41a04af636f50a2f2b7a",
    urls = ["https://github.com/Maratyszcza/pthreadpool/archive/b1b6536539d5ec04416d41a04af636f50a2f2b7a.zip"],
)
# LINT.ThenChange(cmake/DownloadPThreadPool.cmake)

# cpuinfo library, used for detecting processor characteristics
http_archive(
    name = "cpuinfo",
    sha256 = "609fc42c47482c1fc125dccac65e843f640e792540162581c4b7eb6ff81c826a",
    strip_prefix = "cpuinfo-87d8234510367db49a65535021af5e1838a65ac2",
    urls = [
        "https://github.com/pytorch/cpuinfo/archive/87d8234510367db49a65535021af5e1838a65ac2.zip",
    ],
)

# Ruy library, used to benchmark against
http_archive(
    name = "ruy",
    sha256 = "fe8345f521bb378745ebdd0f8c5937414849936851d2ec2609774eb2d7098e54",
    strip_prefix = "ruy-9f53ba413e6fc879236dcaa3e008915973d67a4f",
    urls = [
        "https://github.com/google/ruy/archive/9f53ba413e6fc879236dcaa3e008915973d67a4f.zip",
    ],
)

RULES_ANDROID_NDK_COMMIT = "72ca32741f27c3de69fdcb7a1aaf3ca59919ad8c"

RULES_ANDROID_NDK_SHA = "73eac2cf5f2fd009e8fb197346a2ca39f320b786985658de63a1dff0f12c53d5"

http_archive(
    name = "rules_android_ndk",
    sha256 = RULES_ANDROID_NDK_SHA,
    strip_prefix = "rules_android_ndk-%s" % RULES_ANDROID_NDK_COMMIT,
    url = "https://github.com/bazelbuild/rules_android_ndk/archive/%s.zip" % RULES_ANDROID_NDK_COMMIT,
)

load("@rules_android_ndk//:rules.bzl", "android_ndk_repository")

# Android NDK location and version is auto-detected from $ANDROID_NDK_HOME environment variable
android_ndk_repository(name = "androidndk")

# Android SDK location and API is auto-detected from $ANDROID_HOME environment variable
android_sdk_repository(name = "androidsdk")
