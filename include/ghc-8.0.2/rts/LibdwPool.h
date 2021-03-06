/* ---------------------------------------------------------------------------
 *
 * (c) The GHC Team, 2015-2016
 *
 * A pool of libdw sessions
 *
 * --------------------------------------------------------------------------*/

#ifndef RTS_LIBDW_POOL_H
#define RTS_LIBDW_POOL_H

/* Claim a session from the pool */
LibdwSession *libdwPoolTake(void);

/* Return a session to the pool */
void libdwPoolRelease(LibdwSession *sess);

/* Free any sessions in the pool forcing a reload of any loaded debug
 * information */
void libdwPoolClear(void);

#endif /* RTS_LIBDW_POOL_H */