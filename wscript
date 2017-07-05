# dear emacs, this is -*- python -*-

# variables used by "waf dist"
VERSION = '0.0.1'
APPNAME = 'exo-c'

top = '.'
out = '__build__'

def options(ctx):
    # load a C compiler
    ctx.load('compiler_c')

    # load GNU-like options (--prefix, --lib,...)
    ctx.load('gnu_dirs')
    
def configure(ctx):
    ctx.load('compiler_c')
    ctx.load('gnu_dirs')

    # recurse in libraries/apps to build
    ctx.recurse('app liba libb')
    return

def build(ctx):

    # recurse in libraries/apps to build
    ctx.recurse('app liba libb')
    return

## EOF
