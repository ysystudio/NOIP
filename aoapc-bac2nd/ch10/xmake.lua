target("UVa1640")
    set_kind("binary")
    add_files("UVa1640.cpp")

target("UVa1639")
    set_kind("binary")
    add_files("UVa1639.cpp")

target("UVa10820")
    set_kind("binary")
    add_files("UVa10820.cpp")

target("UVa1642")
    set_kind("binary")
    add_files("UVa1642.cpp")

target("UVa1635")
    set_kind("binary")
    add_files("UVa1635.cpp")

target("UVa12716")
    set_kind("binary")
    add_files("UVa12716.cpp")

target("UVa1638")
    set_kind("binary")
    add_files("UVa1638.cpp")

target("UVa1641")
    set_kind("binary")
    add_files("UVa1641.cpp")

target("UVa10375")
    set_kind("binary")
    add_files("UVa10375.cpp")

target("uva11181")
    set_kind("binary")
    add_files("uva11181.cpp")

target("UVa1262")
    set_kind("binary")
    add_files("UVa1262.cpp")

target("UVa10213")
    set_kind("binary")
    add_files("UVa10213.cpp")

target("UVa11971")
    set_kind("binary")
    add_files("UVa11971.cpp")

target("UVa10288")
    set_kind("binary")
    add_files("UVa10288.cpp")

target("uva1393")
    set_kind("binary")
    add_files("uva1393.cpp")

target("UVa1636")
    set_kind("binary")
    add_files("UVa1636.cpp")

target("UVa580")
    set_kind("binary")
    add_files("UVa580.cpp")

target("uva10491")
    set_kind("binary")
    add_files("uva10491.cpp")

target("UVa1363")
    set_kind("binary")
    add_files("UVa1363.cpp")

target("UVa10214")
    set_kind("binary")
    add_files("UVa10214.cpp")

target("UVa12034")
    set_kind("binary")
    add_files("UVa12034.cpp")

target("UVa1637")
    set_kind("binary")
    add_files("UVa1637.cpp")

target("uva11346")
    set_kind("binary")
    add_files("uva11346.cpp")

target("UVa11582")
    set_kind("binary")
    add_files("UVa11582.cpp")

target("UVa10900")
    set_kind("binary")
    add_files("UVa10900.cpp")

target("UVa11440")
    set_kind("binary")
    add_files("UVa11440.cpp")

target("UVa12169")
    set_kind("binary")
    add_files("UVa12169.cpp")

target("uva12230")
    set_kind("binary")
    add_files("uva12230.cpp")

target("UVa10791")
    set_kind("binary")
    add_files("UVa10791.cpp")

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

