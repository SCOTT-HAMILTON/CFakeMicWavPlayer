project('CFakeMicWavPlayer', 'cpp', 'c', default_options : ['cpp_std=c++17'])

libFakeMicWavPlayer_dep = dependency('fakemicwavplayer', required: true)

lib_inc = include_directories('include')
lib_src = [ 'CFakeMicWavPlayerLib.cpp' ]

libCFakeMicWavPlayer = shared_library('CFakeMicWavPlayer', lib_src, 
  include_directories : lib_inc,
  dependencies : [ libFakeMicWavPlayer_dep ], 
  install : true)

libCFakeMicWavPlayer_dep = declare_dependency(
  link_with: libCFakeMicWavPlayer,
  include_directories: lib_inc)

subdir('tests')

install_headers('include/CFakeMicWavPlayerLib.h' )

install_data('pkg-config/cfakemicwavplayer.pc',
  install_dir: get_option('libdir')+'/pkgconfig')
install_data('pkg-config/cfakemicwavplayer.pc',
  install_dir: get_option('datadir')+'/pkgconfig')
