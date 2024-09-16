project(
  'nesemu',
  'cpp',
  version: '0.1',
  default_options: ['warning_level=3', 'default_library=static', 'cpp_std=c++14'],
)

sdl2_dep = dependency('sdl2')

exe = executable('nesemu', 'nesemu.cpp', dependencies: sdl2_dep)

test('basic', exe)
