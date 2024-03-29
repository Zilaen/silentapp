/* Copyright Joyent, Inc. and other Node contributors. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

TEST_DECLARE   (tty)
TEST_DECLARE   (stdio_over_pipes)
TEST_DECLARE   (ipc_listen_before_write)
TEST_DECLARE   (ipc_listen_after_write)
TEST_DECLARE   (tcp_ping_pong)
TEST_DECLARE   (tcp_ping_pong_v6)
TEST_DECLARE   (pipe_ping_pong)
TEST_DECLARE   (delayed_accept)
TEST_DECLARE   (multiple_listen)
TEST_DECLARE   (tcp_writealot)
TEST_DECLARE   (tcp_bind_error_addrinuse)
TEST_DECLARE   (tcp_bind_error_addrnotavail_1)
TEST_DECLARE   (tcp_bind_error_addrnotavail_2)
TEST_DECLARE   (tcp_bind_error_fault)
TEST_DECLARE   (tcp_bind_error_inval)
TEST_DECLARE   (tcp_bind_localhost_ok)
TEST_DECLARE   (tcp_listen_without_bind)
TEST_DECLARE   (tcp_close)
TEST_DECLARE   (tcp_flags)
TEST_DECLARE   (tcp_write_error)
TEST_DECLARE   (tcp_write_to_half_open_connection)
TEST_DECLARE   (tcp_bind6_error_addrinuse)
TEST_DECLARE   (tcp_bind6_error_addrnotavail)
TEST_DECLARE   (tcp_bind6_error_fault)
TEST_DECLARE   (tcp_bind6_error_inval)
TEST_DECLARE   (tcp_bind6_localhost_ok)
TEST_DECLARE   (udp_send_and_recv)
TEST_DECLARE   (udp_multicast_join)
TEST_DECLARE   (udp_multicast_ttl)
TEST_DECLARE   (udp_dgram_too_big)
TEST_DECLARE   (udp_dual_stack)
TEST_DECLARE   (udp_ipv6_only)
TEST_DECLARE   (udp_options)
TEST_DECLARE   (pipe_bind_error_addrinuse)
TEST_DECLARE   (pipe_bind_error_addrnotavail)
TEST_DECLARE   (pipe_bind_error_inval)
TEST_DECLARE   (pipe_listen_without_bind)
TEST_DECLARE   (pipe_connect_bad_name)
TEST_DECLARE   (connection_fail)
TEST_DECLARE   (connection_fail_doesnt_auto_close)
TEST_DECLARE   (shutdown_eof)
TEST_DECLARE   (callback_stack)
TEST_DECLARE   (error_message)
TEST_DECLARE   (timer)
TEST_DECLARE   (timer_again)
TEST_DECLARE   (idle_starvation)
TEST_DECLARE   (loop_handles)
TEST_DECLARE   (get_loadavg)
TEST_DECLARE   (ref)
TEST_DECLARE   (idle_ref)
TEST_DECLARE   (async_ref)
TEST_DECLARE   (prepare_ref)
TEST_DECLARE   (check_ref)
TEST_DECLARE   (unref_in_prepare_cb)
TEST_DECLARE   (timer_ref)
TEST_DECLARE   (timer_ref2)
TEST_DECLARE   (fs_event_ref)
TEST_DECLARE   (tcp_ref)
TEST_DECLARE   (tcp_ref2)
TEST_DECLARE   (tcp_ref3)
TEST_DECLARE   (udp_ref)
TEST_DECLARE   (udp_ref2)
TEST_DECLARE   (udp_ref3)
TEST_DECLARE   (pipe_ref)
TEST_DECLARE   (pipe_ref2)
TEST_DECLARE   (pipe_ref3)
TEST_DECLARE   (process_ref)
TEST_DECLARE   (async)
TEST_DECLARE   (get_currentexe)
TEST_DECLARE   (cwd_and_chdir)
TEST_DECLARE   (get_memory)
TEST_DECLARE   (hrtime)
TEST_DECLARE   (getaddrinfo_basic)
TEST_DECLARE   (getaddrinfo_concurrent)
TEST_DECLARE   (gethostbyname)
TEST_DECLARE   (getsockname_tcp)
TEST_DECLARE   (getsockname_udp)
TEST_DECLARE   (fail_always)
TEST_DECLARE   (pass_always)
TEST_DECLARE   (spawn_exit_code)
TEST_DECLARE   (spawn_stdout)
TEST_DECLARE   (spawn_stdin)
TEST_DECLARE   (spawn_and_kill)
TEST_DECLARE   (spawn_and_ping)
TEST_DECLARE   (kill)
TEST_DECLARE   (fs_file_noent)
TEST_DECLARE   (fs_file_nametoolong)
TEST_DECLARE   (fs_file_loop)
TEST_DECLARE   (fs_file_async)
TEST_DECLARE   (fs_file_sync)
TEST_DECLARE   (fs_async_dir)
TEST_DECLARE   (fs_async_sendfile)
TEST_DECLARE   (fs_fstat)
TEST_DECLARE   (fs_chmod)
TEST_DECLARE   (fs_chown)
TEST_DECLARE   (fs_link)
TEST_DECLARE   (fs_symlink)
TEST_DECLARE   (fs_utime)
TEST_DECLARE   (fs_futime)
TEST_DECLARE   (fs_file_open_append)
TEST_DECLARE   (fs_stat_missing_path)
TEST_DECLARE   (fs_event_watch_dir)
TEST_DECLARE   (fs_event_watch_file)
TEST_DECLARE   (fs_event_watch_file_current_dir)
TEST_DECLARE   (fs_event_no_callback_on_close)
TEST_DECLARE   (fs_event_immediate_close)
TEST_DECLARE   (fs_readdir_empty_dir)
TEST_DECLARE   (fs_readdir_file)
TEST_DECLARE   (fs_open_dir)
TEST_DECLARE   (fs_rename_to_existing_file)
TEST_DECLARE   (threadpool_queue_work_simple)
TEST_DECLARE   (counters_init)
#ifdef _WIN32
TEST_DECLARE   (spawn_detect_pipe_name_collisions_on_windows)
TEST_DECLARE   (argument_escaping)
TEST_DECLARE   (environment_creation)
TEST_DECLARE   (listen_with_simultaneous_accepts)
TEST_DECLARE   (listen_no_simultaneous_accepts)
TEST_DECLARE   (fs_stat_root)
#endif
HELPER_DECLARE (tcp4_echo_server)
HELPER_DECLARE (tcp6_echo_server)
HELPER_DECLARE (udp4_echo_server)
HELPER_DECLARE (pipe_echo_server)


TASK_LIST_START
  TEST_ENTRY  (pipe_connect_bad_name)

  TEST_ENTRY  (tty)
  TEST_ENTRY  (stdio_over_pipes)
  TEST_ENTRY  (ipc_listen_before_write)
  TEST_ENTRY  (ipc_listen_after_write)

  TEST_ENTRY  (tcp_ping_pong)
  TEST_HELPER (tcp_ping_pong, tcp4_echo_server)

  TEST_ENTRY  (tcp_ping_pong_v6)
  TEST_HELPER (tcp_ping_pong_v6, tcp6_echo_server)

  TEST_ENTRY  (pipe_ping_pong)
  TEST_HELPER (pipe_ping_pong, pipe_echo_server)

  TEST_ENTRY  (delayed_accept)
  TEST_ENTRY  (multiple_listen)

  TEST_ENTRY  (tcp_writealot)
  TEST_HELPER (tcp_writealot, tcp4_echo_server)

  TEST_ENTRY  (tcp_bind_error_addrinuse)
  TEST_ENTRY  (tcp_bind_error_addrnotavail_1)
  TEST_ENTRY  (tcp_bind_error_addrnotavail_2)
  TEST_ENTRY  (tcp_bind_error_fault)
  TEST_ENTRY  (tcp_bind_error_inval)
  TEST_ENTRY  (tcp_bind_localhost_ok)
  TEST_ENTRY  (tcp_listen_without_bind)
  TEST_ENTRY  (tcp_close)
  TEST_ENTRY  (tcp_flags)
  TEST_ENTRY  (tcp_write_error)
  TEST_ENTRY  (tcp_write_to_half_open_connection)

  TEST_ENTRY  (tcp_bind6_error_addrinuse)
  TEST_ENTRY  (tcp_bind6_error_addrnotavail)
  TEST_ENTRY  (tcp_bind6_error_fault)
  TEST_ENTRY  (tcp_bind6_error_inval)
  TEST_ENTRY  (tcp_bind6_localhost_ok)

  TEST_ENTRY  (udp_send_and_recv)
  TEST_ENTRY  (udp_dgram_too_big)
  TEST_ENTRY  (udp_dual_stack)
  TEST_ENTRY  (udp_ipv6_only)
  TEST_ENTRY  (udp_options)
  TEST_ENTRY  (udp_multicast_join)
  TEST_ENTRY  (udp_multicast_ttl)

  TEST_ENTRY  (pipe_bind_error_addrinuse)
  TEST_ENTRY  (pipe_bind_error_addrnotavail)
  TEST_ENTRY  (pipe_bind_error_inval)
  TEST_ENTRY  (pipe_listen_without_bind)

  TEST_ENTRY  (connection_fail)
  TEST_ENTRY  (connection_fail_doesnt_auto_close)

  TEST_ENTRY  (shutdown_eof)
  TEST_HELPER (shutdown_eof, tcp4_echo_server)

  TEST_ENTRY  (callback_stack)
  TEST_HELPER (callback_stack, tcp4_echo_server)

  TEST_ENTRY  (error_message)

  TEST_ENTRY  (timer)
  TEST_ENTRY  (timer_again)

  TEST_ENTRY  (idle_starvation)

  TEST_ENTRY  (ref)
  TEST_ENTRY  (idle_ref)
  TEST_ENTRY  (async_ref)
  TEST_ENTRY  (prepare_ref)
  TEST_ENTRY  (check_ref)
  TEST_ENTRY  (unref_in_prepare_cb)
  TEST_ENTRY  (timer_ref)
  TEST_ENTRY  (timer_ref2)
  TEST_ENTRY  (fs_event_ref)
  TEST_ENTRY  (tcp_ref)
  TEST_ENTRY  (tcp_ref2)
  TEST_ENTRY  (tcp_ref3)
  TEST_HELPER (tcp_ref3, tcp4_echo_server)
  TEST_ENTRY  (udp_ref)
  TEST_ENTRY  (udp_ref2)
  TEST_ENTRY  (udp_ref3)
  TEST_HELPER (udp_ref3, udp4_echo_server)
  TEST_ENTRY  (pipe_ref)
  TEST_ENTRY  (pipe_ref2)
  TEST_ENTRY  (pipe_ref3)
  TEST_HELPER (pipe_ref3, pipe_echo_server)
  TEST_ENTRY  (process_ref)

  TEST_ENTRY  (loop_handles)

  TEST_ENTRY  (async)

  TEST_ENTRY  (get_currentexe)

  TEST_ENTRY  (cwd_and_chdir)

  TEST_ENTRY  (get_memory)

  TEST_ENTRY  (get_loadavg)

  TEST_ENTRY  (hrtime)

  TEST_ENTRY  (getaddrinfo_basic)
  TEST_ENTRY  (getaddrinfo_concurrent)

  TEST_ENTRY  (gethostbyname)
  TEST_HELPER (gethostbyname, tcp4_echo_server)

  TEST_ENTRY  (getsockname_tcp)
  TEST_ENTRY  (getsockname_udp)

  TEST_ENTRY  (spawn_exit_code)
  TEST_ENTRY  (spawn_stdout)
  TEST_ENTRY  (spawn_stdin)
  TEST_ENTRY  (spawn_and_kill)
  TEST_ENTRY  (spawn_and_ping)
  TEST_ENTRY  (kill)
#ifdef _WIN32
  TEST_ENTRY  (spawn_detect_pipe_name_collisions_on_windows)
  TEST_ENTRY  (argument_escaping)
  TEST_ENTRY  (environment_creation)
  TEST_ENTRY  (listen_with_simultaneous_accepts)
  TEST_ENTRY  (listen_no_simultaneous_accepts)
  TEST_ENTRY  (fs_stat_root)
#endif

  TEST_ENTRY  (fs_file_noent)
  TEST_ENTRY  (fs_file_nametoolong)
  TEST_ENTRY  (fs_file_loop)
  TEST_ENTRY  (fs_file_async)
  TEST_ENTRY  (fs_file_sync)
  TEST_ENTRY  (fs_async_dir)
  TEST_ENTRY  (fs_async_sendfile)
  TEST_ENTRY  (fs_fstat)
  TEST_ENTRY  (fs_chmod)
  TEST_ENTRY  (fs_chown)
  TEST_ENTRY  (fs_utime)
  TEST_ENTRY  (fs_futime)
  TEST_ENTRY  (fs_symlink)
  TEST_ENTRY  (fs_stat_missing_path)
  TEST_ENTRY  (fs_file_open_append)
  TEST_ENTRY  (fs_event_watch_dir)
  TEST_ENTRY  (fs_event_watch_file)
  TEST_ENTRY  (fs_event_watch_file_current_dir)
  TEST_ENTRY  (fs_event_no_callback_on_close)
  TEST_ENTRY  (fs_event_immediate_close)
  TEST_ENTRY  (fs_readdir_empty_dir)
  TEST_ENTRY  (fs_readdir_file)
  TEST_ENTRY  (fs_open_dir)
  TEST_ENTRY  (fs_rename_to_existing_file)
  TEST_ENTRY  (threadpool_queue_work_simple)
  TEST_ENTRY  (counters_init)

#if 0
  /* These are for testing the test runner. */
  TEST_ENTRY  (fail_always)
  TEST_ENTRY  (pass_always)
#endif
TASK_LIST_END
