project(
  'c84',
  'c',
  meson_version : '>= 1.3.0',
  version : '0.1',
  default_options : ['warning_level=3'],
)

gcc = meson.get_compiler('c')
mathlib = gcc.find_library('m')

dependencies = [
  mathlib
]

exe = executable(
  'c84',
  'c84.c',
  dependencies : dependencies,
  install : true,
)

test('basic', exe)
