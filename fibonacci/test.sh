#!/bin/sh

SCRIPT_DIR=$(
  cd "$(dirname "$0")" || exit
  pwd
)
TEST_DIR=/tmp/fibonacci.$$

for p in cxx python julia; do
  DIRS=$(
    cd "${SCRIPT_DIR}/${p}" || exit
    ls
  )
  for d in ${DIRS}; do
    if [ -f "${SCRIPT_DIR}/${p}/${d}/CMakeLists.txt" ]; then
      echo "test: ${p}/${d}"
      rm -rf ${TEST_DIR}
      mkdir -p ${TEST_DIR}
      (cd ${TEST_DIR} && cmake "${SCRIPT_DIR}/${p}/${d}" >/dev/null)
      (cd ${TEST_DIR} && make -j all >/dev/null)
      (cd ${TEST_DIR} && ctest >/dev/null)
    fi
  done
done
