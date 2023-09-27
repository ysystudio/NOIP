target("2022no9")
    set_kind("binary")
    add_files("2022no9.cpp")

target("2022no8")
    set_kind("binary")
    add_files("2022no8.cpp")

target("2022Graph_basic")
    set_kind("binary")
    add_files("2022Graph_basic.cpp")

target("2022no12")
    set_kind("binary")
    add_files("2022no12.cpp")

target("2022no13")
    set_kind("binary")
    add_files("2022no13.cpp")

target("2022no11")
    set_kind("binary")
    add_files("2022no11.cpp")

target("2022no10")
    set_kind("binary")
    add_files("2022no10.cpp")

target("2022no14")
    set_kind("binary")
    add_files("2022no14.cpp")

target("w_network")
    set_kind("binary")
    add_files("w_network.cpp")

target("2022No16-bfs")
    set_kind("binary")
    add_files("2022No16-bfs.cpp")

target("图DFS")
    set_kind("binary")
    add_files("图DFS.cpp")

target("图BFS")
    set_kind("binary")
    add_files("图BFS.cpp")

target("2022DFS")
    set_kind("binary")
    add_files("2022DFS.cpp")

target("2022no3-no4")
    set_kind("binary")
    add_files("2022no3-no4.cpp")

target("2022No15-stack")
    set_kind("binary")
    add_files("2022No15-stack.cpp")

target("2022no7")
    set_kind("binary")
    add_files("2022no7.cpp")

target("2022no5")
    set_kind("binary")
    add_files("2022no5.cpp")

--
-- If you want to known more usage about xmake, please see https://xmake.io
--
-- ## FAQ
--
-- You can enter the project directory firstly before building project.
--
--   $ cd projectdir
--
-- 1. How to build project?
--
--   $ xmake
--
-- 2. How to configure project?
--
--   $ xmake f -p [macosx|linux|iphoneos ..] -a [x86_64|i386|arm64 ..] -m [debug|release]
--
-- 3. Where is the build output directory?
--
--   The default output directory is `./build` and you can configure the output directory.
--
--   $ xmake f -o outputdir
--   $ xmake
--
-- 4. How to run and debug target after building project?
--
--   $ xmake run [targetname]
--   $ xmake run -d [targetname]
--
-- 5. How to install target to the system directory or other output directory?
--
--   $ xmake install
--   $ xmake install -o installdir
--
-- 6. Add some frequently-used compilation flags in xmake.lua
--
-- @code
--    -- add debug and release modes
--    add_rules("mode.debug", "mode.release")
--
--    -- add macro defination
--    add_defines("NDEBUG", "_GNU_SOURCE=1")
--
--    -- set warning all as error
--    set_warnings("all", "error")
--
--    -- set language: c99, c++11
--    set_languages("c99", "c++11")
--
--    -- set optimization: none, faster, fastest, smallest
--    set_optimize("fastest")
--
--    -- add include search directories
--    add_includedirs("/usr/include", "/usr/local/include")
--
--    -- add link libraries and search directories
--    add_links("tbox")
--    add_linkdirs("/usr/local/lib", "/usr/lib")
--
--    -- add system link libraries
--    add_syslinks("z", "pthread")
--
--    -- add compilation and link flags
--    add_cxflags("-stdnolib", "-fno-strict-aliasing")
--    add_ldflags("-L/usr/local/lib", "-lpthread", {force = true})
--
-- @endcode
--

