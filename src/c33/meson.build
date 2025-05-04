project('c33', 'c', version: '0.1', default_options: ['warning_level=3'])

gcc = meson.get_compiler('c')
mathlib = gcc.find_library('m')

exe = executable('c33', 'c33.c', install: true, dependencies: [mathlib])

test('basic', exe)
