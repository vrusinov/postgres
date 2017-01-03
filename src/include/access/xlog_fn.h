/*
 * xlog_fn.h
 *
 * PostgreSQL transaction log SQL-callable function declarations
 *
 * Portions Copyright (c) 1996-2017, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/access/xlog_fn.h
 */
#ifndef XLOG_FN_H
#define XLOG_FN_H

#include "fmgr.h"

extern Datum pg_start_backup(PG_FUNCTION_ARGS);
extern Datum pg_stop_backup(PG_FUNCTION_ARGS);
extern Datum pg_stop_backup_v2(PG_FUNCTION_ARGS);
extern Datum pg_switch_wal(PG_FUNCTION_ARGS);
extern Datum pg_create_restore_point(PG_FUNCTION_ARGS);
extern Datum pg_current_wal_location(PG_FUNCTION_ARGS);
extern Datum pg_current_wal_insert_location(PG_FUNCTION_ARGS);
extern Datum pg_current_wal_flush_location(PG_FUNCTION_ARGS);
extern Datum pg_last_wal_receive_location(PG_FUNCTION_ARGS);
extern Datum pg_last_wal_replay_location(PG_FUNCTION_ARGS);
extern Datum pg_last_xact_replay_timestamp(PG_FUNCTION_ARGS);
extern Datum pg_wal_file_name_offset(PG_FUNCTION_ARGS);
extern Datum pg_wal_file_name(PG_FUNCTION_ARGS);
extern Datum pg_is_in_recovery(PG_FUNCTION_ARGS);
extern Datum pg_wal_replay_pause(PG_FUNCTION_ARGS);
extern Datum pg_wal_replay_resume(PG_FUNCTION_ARGS);
extern Datum pg_is_recovery_paused(PG_FUNCTION_ARGS);
extern Datum pg_wal_location_diff(PG_FUNCTION_ARGS);
extern Datum pg_is_in_backup(PG_FUNCTION_ARGS);
extern Datum pg_backup_start_time(PG_FUNCTION_ARGS);

#endif   /* XLOG_FN_H */
