project(
  'c87',
  'c',
  meson_version : '>= 1.3.0',
  version : '0.1',
  default_options : ['warning_level=3'],
)

dependencies = [
]

exe = executable(
  'c87',
  'c87.c',
  dependencies : dependencies,
  install : true,
)

test('basic', exe)
