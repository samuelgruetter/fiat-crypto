#!/bin/sh
set -eu

/usr/bin/env python3 "$@" -Dq='2**251 - 9' -Dmodulus_bytes='25.1' -Da24='121665'
