This document is a declaration of software quality for **rmw_microxrcedds_c** based on the guidelines provided in the [ROS 2 REP-2004 document](https://www.ros.org/reps/rep-2004.html).

# Quality Declaration

**rmw_microxrcedds_c** is a RMW implementation for ROS 2 and micro-ROS that uses [eProsima Micro XRCE-DDS](https://github.com/eProsima/Micro-XRCE-DDS) as a middleware library.

**rmw_microxrcedds_c** claims to be in the **Quality Level 2** category.

Below are the rationales, notes and caveats for this claim, organized by each requirement listed in the [Package Requirements for Quality Level 2 in REP-2004](https://www.ros.org/reps/rep-2004.html#package-requirements).

## Version Policy [1]

### Version Scheme [1.i]

The **Versioning Policy Declaration** for **rmw_microxrcedds_c** can be found [here](VERSIONING.md) and it adheres to [`semver`](https://semver.org/).

### Version Stability [1.ii]

**rmw_microxrcedds_c** is at a stable version, i.e. `>=1.0.0`.
The latest version and the release notes can be found [here](https://github.com/micro-ROS/rmw-microxrcedds/releases).

### Public API Declaration [1.iii]

All symbols in the installed headers are considered part of the public API.

All installed headers are in the `include` directory of the package. Headers in any other folders are not installed and considered as private.

### API Stability Within a Released ROS Distribution [1.iv]/[1.vi]

**rmw_microxrcedds_c** will not break public API within a released ROS distribution, i.e. no major releases once the ROS distribution is released.

### ABI Stability Within a Released ROS Distribution [1.v]/[1.vi]

**rmw_microxrcedds_c**  contains C and C++ code and therefore must be concerned with ABI stability, and will maintain ABI stability within a ROS distribution.
Any ABI break in **rmw_microxrcedds_c** will be done between minor versions and it should be clearly stated in the release notes.

## Change Control Process [2]

The stability of **rmw_microxrcedds_c** is ensured through reviews, CI and tests.
The change control process can be found in [CONTRIBUTING](CONTRIBUTING.md)

All changes to **rmw_microxrcedds_c** occur through pull requests that are required to pass all CI tests.
In case of failure, only maintainers can merge the pull request, and only when there is enough evidence that the failure is unrelated to the change.
Additionally, all pull requests must have at least one positive review from another contributor that did not author the pull request.

### Change Requests [2.i]

All changes will occur through a pull request.

### Contributor Origin [2.ii]

**rmw_microxrcedds_c** uses the [Developer Certificate of Origin (DCO)](https://developercertificate.org/) as its confirmation of contributor origin policy since version 1.0.0.
More information can be found in [CONTRIBUTING](CONTRIBUTING.md)

### Peer Review Policy [2.iii]

All pull requests will be peer-reviewed by at least one other contributor who did not author the pull request. Approval is required before merging.

### Continuous Integration [2.iv]

All pull requests must pass CI to be considered for merging, unless maintainers consider that there is enough evidence that the failure is unrelated to the changes.
CI testing is automatically triggered by incoming pull requests.
Current results can be seen here:

* [![CI rmw_microxrcedds_c](https://github.com/micro-ROS/rmw-microxrcedds/actions/workflows/ci.yml/badge.svg?branch=foxy&event=push)](https://github.com/micro-ROS/rmw-microxrcedds/actions/workflows/ci.yml)

## Documentation [3]

### Feature Documentation [3.i]

Some of the **rmw_microxrcedds_c** features are documented at the repository level [README](../README.md).
[eProsima Micro XRCE-DDS](https://github.com/eProsima/Micro-XRCE-DDS) has feature documentation [hosted publicly](https://micro-xrce-dds.docs.eprosima.com/en/latest/).

### License [3.iii]

The license for **rmw_microxrcedds_c** is Apache 2.0, and a summary can be found in each source file.
A full copy of the license can be found [here](LICENSE).

### Copyright Statements [3.iv]

The **rmw_microxrcedds_c** copyright holder provides a statement of copyright in each source file.

## Testing [4]

### Feature Testing [4.i]

**rmw_microxrcedds_c** provides tests which simulate typical usage, and they are located in the [`test` directory](test).
New features are required to have tests before being added as stated in [CONTRIBUTING](CONTRIBUTING.md).
Current results can be found here:

* [![CI rmw_microxrcedds_c](https://github.com/micro-ROS/rmw-microxrcedds/actions/workflows/ci.yml/badge.svg?branch=foxy&event=push)](https://github.com/micro-ROS/rmw-microxrcedds/actions/workflows/ci.yml)

### Coverage [4.iii]

[![codecov](https://codecov.io/gh/micro-ROS/rmw-microxrcedds/branch/foxy/graph/badge.svg?token=F7LUHZO0IV)](https://codecov.io/gh/micro-ROS/rmw-microxrcedds)

**rmw_microxrcedds_c** checks the coverage of every commit. Last coverage assessment can be seen in [Codecov](https://app.codecov.io/gh/micro-ROS/rmw-microxrcedds/commits).

### Linters and Static Analysis [4.v]

**rmw_microxrcedds_c** [code style](https://github.com/eProsima/cpp-style) is enforced using [*uncrustify*](https://github.com/uncrustify/uncrustify).
Among the CI tests, there are tests that ensure that every pull request is compliant with the code style.
The latest CI results can be seen [here](https://github.com/micro-ROS/rmw-microxrcedds/actions/workflows/ci.yml).

**rmw_microxrcedds_c** uses and passes all the standard linters and static analysis tools for a C99 package as described in the [ROS 2 Developer Guide](https://index.ros.org/doc/ros2/Contributing/Developer-Guide/#linters).

Results of the latest linter tests can be found [here](https://github.com/micro-ROS/rmw-microxrcedds/actions/workflows/ci.yml?query=branch%3Afoxy).

## Dependencies [5]

### Direct Runtime Dependencies [5.iii]

**rmw_microxrcedds_c**  has the following runtime dependencies, which are at or above **Quality Level 2**:
* `eProsima Micro XRCE-DDS-Client`: [QUALITY DECLARATION](https://github.com/eProsima/Micro-XRCE-DDS-Client/blob/master/QUALITY.md)
* `eProsima Micro CDR`: [QUALITY DECLARATION](https://github.com/eProsima/Micro-CDR/blob/master/QUALITY.md)
* `rcutils`: [QUALITY DECLARATION](https://github.com/ros2/rcutils/blob/master/QUALITY_DECLARATION.md)
* `rmw`: [QUALITY DECLARATION](https://github.com/ros2/rmw/blob/master/rmw/QUALITY_DECLARATION.md)
* `rosidl_runtime_c`: [QUALITY DECLARATION](https://github.com/ros2/rosidl/blob/master/rosidl_runtime_c/QUALITY_DECLARATION.md)
* `rosidl_typesupport_microxrcedds_c`: [QUALITY DECLARATION](https://github.com/micro-ROS/rosidl_typesupport_microxrcedds/blob/foxy/rosidl_typesupport_microxrcedds_c/QUALITY.md)

## Platform Support [6]

**rmw_microxrcedds_c** is intended for micro-ROS and therefore to run on embedded platforms, so the officially supported platforms are not the same as in ROS 2. These include GNU/Linux and POSIX systems and all the major embedded RTOS such as Zephyr RTOS, FreeRTOS, and NuttX. Windows is not included as a Tier 1 platform because it is not relevant for this package due to its nature.

More information about the supported platforms can be found in [PLATFORM_SUPPORT](PLATFORM_SUPPORT.md)

## Vulnerability Disclosure Policy [7.i]

**rmw_microxrcedds_c** vulnerability Disclosure Policy can be found [here](https://github.com/eProsima/policies/blob/main/VULNERABILITY.md)

# Current Status Summary

The chart below compares the requirements in the [REP-2004](https://www.ros.org/reps/rep-2004.html#quality-level-comparison-chart) with the current state of **rmw_microxrcedds_c**.
| Number  | Requirement                                       | Current State |
| ------- | ------------------------------------------------- | ------------- |
| 1       | **Version policy**                                | ---           |
| 1.i     | Version Policy available                          | ✓             |
| 1.ii    | Stable version                                    | ✓             |
| 1.iii   | Declared public API                               | ✓             |
| 1.iv    | API stability policy                              | ✓             |
| 1.v     | ABI stability policy                              | ✓             |
| 1.v_    | API/ABI stable within ros distribution            | ✓             |
| 2       | **Change control process**                        | ---           |
| 2.i     | All changes occur on change request               | ✓             |
| 2.ii    | Contributor origin (DCO, CLA, etc)                | ✓             |
| 2.iii   | Peer review policy                                | ✓             |
| 2.iv    | CI policy for change requests                     | ✓             |
| 3       | **Documentation**                                 | ---           |
| 3.i     | Per feature documentation                         | ✓             |
| 3.iii   | Declared License(s)                               | ✓             |
| 3.iv    | Copyright in source files                         | ✓             |
| 3.v.a   | Quality declaration linked to README              | ✓             |
| 3.v.b   | Centralized declaration available for peer review | ✓             |
| 4       | **Testing**                                       | ---           |
| 4.i     | Feature items tests                               | ✓             |
| 4.iii.a | Using coverage                                    | ✓             |
| 4.v.a   | Code style enforcement (linters)                  | ✓             |
| 4.v.b   | Use of static analysis tools                      | ✓             |
| 5       | **Dependencies**                                  | ---           |
| 5.iii   | Justifies quality use of dependencies             | ✓             |
| 6       | **Platform support**                              | ---           |
| 6.i     | Support targets Tier1 ROS platforms               | ✓             |
| 7       | **Security**                                      | ---           |
| 7.i     | Vulnerability Disclosure Policy                   | ✓             |
