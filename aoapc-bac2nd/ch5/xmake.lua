target("UVa12096")
    set_kind("binary")
    add_files("UVa12096.cpp")

target("template")
    set_kind("binary")
    add_files("template.cpp")

target("UVa400")
    set_kind("binary")
    add_files("UVa400.cpp")

target("UVa207")
    set_kind("binary")
    add_files("UVa207.cpp")

target("test_stl")
    set_kind("binary")
    add_files("test_stl.cpp")

target("5-1")
    set_kind("binary")
    add_files("5-1.cpp")

target("5-2")
    set_kind("binary")
    add_files("5-2.cpp")

target("5-3")
    set_kind("binary")
    add_files("5-3.cpp")

target("pq")
    set_kind("binary")
    add_files("pq.cpp")

target("UVa10815")
    set_kind("binary")
    add_files("UVa10815.cpp")

target("uva101")
    set_kind("binary")
    add_files("uva101.cpp")

target("test_sstream")
    set_kind("binary")
    add_files("test_sstream.cpp")

target("point2")
    set_kind("binary")
    add_files("point2.cpp")

target("point")
    set_kind("binary")
    add_files("point.cpp")

target("UVa1592")
    set_kind("binary")
    add_files("UVa1592.cpp")

target("BigInteger")
    set_kind("binary")
    add_files("BigInteger.cpp")

target("uva136")
    set_kind("binary")
    add_files("uva136.cpp")

target("uva10474")
    set_kind("binary")
    add_files("uva10474.cpp")

target("uva540")
    set_kind("binary")
    add_files("uva540.cpp")

target("uva814")
    set_kind("binary")
    add_files("uva814.cpp")

target("uva221")
    set_kind("binary")
    add_files("uva221.cpp")

target("UVa156")
    set_kind("binary")
    add_files("UVa156.cpp")

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

