project('c58', 'c', version: '0.1', default_options: ['warning_level=3'])

glut = dependency('glut')
GL = dependency('GL')
gcc = meson.get_compiler('c')
mathlib = gcc.find_library('m')
Dep = [glut, GL, mathlib]

exe = executable('c58', 'c58.c', install: true, dependencies: Dep)

test('basic', exe)
