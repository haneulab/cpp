function build() {
    rm -rf build && mkdir build && g++ -std=c++17 "$1" -o "build/$2"
}

function run() {
    "build/$1"
}

function remove() {
    rm "$1".cpp "build/$1"
}