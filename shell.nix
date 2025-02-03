with import <nixpkgs> {};
mkShell {
    buildInputs = [ gcc llvmPackages.clang-tools llvmPackages.clang ];
}
