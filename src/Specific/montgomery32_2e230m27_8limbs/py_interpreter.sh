#!/bin/sh
set -eu

/usr/bin/env python3 "$@" -Dq='2**230 - 27' -Dmodulus_bytes='32' -Da24='121665'
