package wx

// #cgo CPPFLAGS: -D__WXOSX__ -D__WXOSX_COCOA__
// #cgo CPPFLAGS: -I${SRCDIR}/darwin_amd64/include
// #cgo LDFLAGS: -L${SRCDIR}/darwin_amd64/lib
// #cgo LDFLAGS: -framework Carbon
// #cgo LDFLAGS: -framework Cocoa
// #cgo LDFLAGS: -framework IOKit
import "C"
