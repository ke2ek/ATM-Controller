load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "account",
    srcs = ["account.cc"],
    hdrs = ["account.h"],
)

cc_library(
    name = "controller",
    srcs = ["controller.cc"],
    hdrs = ["controller.h"],
    deps = [":account"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "atm-main",
    srcs = ["atm-main.cc"],
    deps = [":controller"],
)
