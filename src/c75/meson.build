project(
  'c75',
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
  'c75',
  'c75.c',
  dependencies : dependencies,
  install : true,
)

test('basic', exe)
