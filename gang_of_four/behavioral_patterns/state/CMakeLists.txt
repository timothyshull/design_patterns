set(STATE_SRCS
        state_main.cpp
        TCP_closed.cpp
        TCP_closed.h
        TCP_connection.cpp
        TCP_connection.h
        TCP_established.cpp
        TCP_established.h
        TCP_listen.cpp
        TCP_listen.h
        TCP_octet_stream.cpp
        TCP_octet_stream.h
        TCP_state.cpp
        TCP_state.h)

add_executable(state ${STATE_SRCS})