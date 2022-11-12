from distutils.core import setup, Extension

def main():
    setup(
        name="easystats",
        version="0.0.1",
        description="easystats module in python",
        author="Patrick and Grady",
        ext_modules=[Extension("easystats", ["vec.c"])]
    )

if (__name__ == "__main__"):
    main()
