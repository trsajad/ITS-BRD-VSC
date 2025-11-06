# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/lone_puppeteer/Dokumente/HAW-P/ITS-BRD-VSC/Programs/Taschenrechner/tmp/Taschenrechner.Debug+ITSboard"
  "/home/lone_puppeteer/Dokumente/HAW-P/ITS-BRD-VSC/Programs/Taschenrechner/tmp/1"
  "/home/lone_puppeteer/Dokumente/HAW-P/ITS-BRD-VSC/Programs/Taschenrechner/tmp/Taschenrechner.Debug+ITSboard"
  "/home/lone_puppeteer/Dokumente/HAW-P/ITS-BRD-VSC/Programs/Taschenrechner/tmp/Taschenrechner.Debug+ITSboard/tmp"
  "/home/lone_puppeteer/Dokumente/HAW-P/ITS-BRD-VSC/Programs/Taschenrechner/tmp/Taschenrechner.Debug+ITSboard/src/Taschenrechner.Debug+ITSboard-stamp"
  "/home/lone_puppeteer/Dokumente/HAW-P/ITS-BRD-VSC/Programs/Taschenrechner/tmp/Taschenrechner.Debug+ITSboard/src"
  "/home/lone_puppeteer/Dokumente/HAW-P/ITS-BRD-VSC/Programs/Taschenrechner/tmp/Taschenrechner.Debug+ITSboard/src/Taschenrechner.Debug+ITSboard-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/lone_puppeteer/Dokumente/HAW-P/ITS-BRD-VSC/Programs/Taschenrechner/tmp/Taschenrechner.Debug+ITSboard/src/Taschenrechner.Debug+ITSboard-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/lone_puppeteer/Dokumente/HAW-P/ITS-BRD-VSC/Programs/Taschenrechner/tmp/Taschenrechner.Debug+ITSboard/src/Taschenrechner.Debug+ITSboard-stamp${cfgdir}") # cfgdir has leading slash
endif()
