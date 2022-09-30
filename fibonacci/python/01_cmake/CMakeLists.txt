cmake_minimum_required(VERSION 3.14)
project(fibonacci NONE)
find_package (Python)

configure_file(fibonacci fibonacci FILE_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ GROUP_EXECUTE WORLD_READ WORLD_EXECUTE)
