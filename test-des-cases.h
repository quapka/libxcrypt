/*
 * These test vectors for the DES primitive block cipher are derived
 * from Phil Karns' PD DES package.  They are used to test both the
 * raw encryption primitive (des.c) and the obsolete setkey/encrypt
 * API that wraps it (des-obsolete.c).
 *
 * @(#)cert.c   1.8 11 Aug 1996
 */

#ifndef _CRYPT_TEST_DES_CASES_H
#define _CRYPT_TEST_DES_CASES_H 1

struct des_testcase
{
  unsigned char key[8];
  unsigned char plain[8];
  unsigned char answer[8];
};

static const struct des_testcase des_testcases[] = {
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x95\xf8\xa5\xe5\xdd\x31\xd9\x00", "\x80\x00\x00\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xdd\x7f\x12\x1c\xa5\x01\x56\x19", "\x40\x00\x00\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x2e\x86\x53\x10\x4f\x38\x34\xea", "\x20\x00\x00\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x4b\xd3\x88\xff\x6c\xd8\x1d\x4f", "\x10\x00\x00\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x20\xb9\xe7\x67\xb2\xfb\x14\x56", "\x08\x00\x00\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x55\x57\x93\x80\xd7\x71\x38\xef", "\x04\x00\x00\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x6c\xc5\xde\xfa\xaf\x04\x51\x2f", "\x02\x00\x00\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x0d\x9f\x27\x9b\xa5\xd8\x72\x60", "\x01\x00\x00\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xd9\x03\x1b\x02\x71\xbd\x5a\x0a", "\x00\x80\x00\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x42\x42\x50\xb3\x7c\x3d\xd9\x51", "\x00\x40\x00\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xb8\x06\x1b\x7e\xcd\x9a\x21\xe5", "\x00\x20\x00\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xf1\x5d\x0f\x28\x6b\x65\xbd\x28", "\x00\x10\x00\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xad\xd0\xcc\x8d\x6e\x5d\xeb\xa1", "\x00\x08\x00\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xe6\xd5\xf8\x27\x52\xad\x63\xd1", "\x00\x04\x00\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xec\xbf\xe3\xbd\x3f\x59\x1a\x5e", "\x00\x02\x00\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xf3\x56\x83\x43\x79\xd1\x65\xcd", "\x00\x01\x00\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x2b\x9f\x98\x2f\x20\x03\x7f\xa9", "\x00\x00\x80\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x88\x9d\xe0\x68\xa1\x6f\x0b\xe6", "\x00\x00\x40\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xe1\x9e\x27\x5d\x84\x6a\x12\x98", "\x00\x00\x20\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x32\x9a\x8e\xd5\x23\xd7\x1a\xec", "\x00\x00\x10\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xe7\xfc\xe2\x25\x57\xd2\x3c\x97", "\x00\x00\x08\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x12\xa9\xf5\x81\x7f\xf2\xd6\x5d", "\x00\x00\x04\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xa4\x84\xc3\xad\x38\xdc\x9c\x19", "\x00\x00\x02\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xfb\xe0\x0a\x8a\x1e\xf8\xad\x72", "\x00\x00\x01\x00\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x75\x0d\x07\x94\x07\x52\x13\x63", "\x00\x00\x00\x80\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x64\xfe\xed\x9c\x72\x4c\x2f\xaf", "\x00\x00\x00\x40\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xf0\x2b\x26\x3b\x32\x8e\x2b\x60", "\x00\x00\x00\x20\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x9d\x64\x55\x5a\x9a\x10\xb8\x52", "\x00\x00\x00\x10\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xd1\x06\xff\x0b\xed\x52\x55\xd7", "\x00\x00\x00\x08\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xe1\x65\x2c\x6b\x13\x8c\x64\xa5", "\x00\x00\x00\x04\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xe4\x28\x58\x11\x86\xec\x8f\x46", "\x00\x00\x00\x02\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xae\xb5\xf5\xed\xe2\x2d\x1a\x36", "\x00\x00\x00\x01\x00\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xe9\x43\xd7\x56\x8a\xec\x0c\x5c", "\x00\x00\x00\x00\x80\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xdf\x98\xc8\x27\x6f\x54\xb0\x4b", "\x00\x00\x00\x00\x40\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xb1\x60\xe4\x68\x0f\x6c\x69\x6f", "\x00\x00\x00\x00\x20\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xfa\x07\x52\xb0\x7d\x9c\x4a\xb8", "\x00\x00\x00\x00\x10\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xca\x3a\x2b\x03\x6d\xbc\x85\x02", "\x00\x00\x00\x00\x08\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x5e\x09\x05\x51\x7b\xb5\x9b\xcf", "\x00\x00\x00\x00\x04\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x81\x4e\xeb\x3b\x91\xd9\x07\x26", "\x00\x00\x00\x00\x02\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x4d\x49\xdb\x15\x32\x91\x9c\x9f", "\x00\x00\x00\x00\x01\x00\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x25\xeb\x5f\xc3\xf8\xcf\x06\x21", "\x00\x00\x00\x00\x00\x80\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xab\x6a\x20\xc0\x62\x0d\x1c\x6f", "\x00\x00\x00\x00\x00\x40\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x79\xe9\x0d\xbc\x98\xf9\x2c\xca", "\x00\x00\x00\x00\x00\x20\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x86\x6e\xce\xdd\x80\x72\xbb\x0e", "\x00\x00\x00\x00\x00\x10\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x8b\x54\x53\x6f\x2f\x3e\x64\xa8", "\x00\x00\x00\x00\x00\x08\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xea\x51\xd3\x97\x55\x95\xb8\x6b", "\x00\x00\x00\x00\x00\x04\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xca\xff\xc6\xac\x45\x42\xde\x31", "\x00\x00\x00\x00\x00\x02\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x8d\xd4\x5a\x2d\xdf\x90\x79\x6c", "\x00\x00\x00\x00\x00\x01\x00\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x10\x29\xd5\x5e\x88\x0e\xc2\xd0", "\x00\x00\x00\x00\x00\x00\x80\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x5d\x86\xcb\x23\x63\x9d\xbe\xa9", "\x00\x00\x00\x00\x00\x00\x40\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x1d\x1c\xa8\x53\xae\x7c\x0c\x5f", "\x00\x00\x00\x00\x00\x00\x20\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xce\x33\x23\x29\x24\x8f\x32\x28", "\x00\x00\x00\x00\x00\x00\x10\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x84\x05\xd1\xab\xe2\x4f\xb9\x42", "\x00\x00\x00\x00\x00\x00\x08\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xe6\x43\xd7\x80\x90\xca\x42\x07", "\x00\x00\x00\x00\x00\x00\x04\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x48\x22\x1b\x99\x37\x74\x8a\x23", "\x00\x00\x00\x00\x00\x00\x02\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xdd\x7c\x0b\xbd\x61\xfa\xfd\x54", "\x00\x00\x00\x00\x00\x00\x01\x00" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x2f\xbc\x29\x1a\x57\x0d\xb5\xc4", "\x00\x00\x00\x00\x00\x00\x00\x80" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xe0\x7c\x30\xd7\xe4\xe2\x6e\x12", "\x00\x00\x00\x00\x00\x00\x00\x40" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x09\x53\xe2\x25\x8e\x8e\x90\xa1", "\x00\x00\x00\x00\x00\x00\x00\x20" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x5b\x71\x1b\xc4\xce\xeb\xf2\xee", "\x00\x00\x00\x00\x00\x00\x00\x10" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xcc\x08\x3f\x1e\x6d\x9e\x85\xf6", "\x00\x00\x00\x00\x00\x00\x00\x08" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\xd2\xfd\x88\x67\xd5\x0d\x2d\xfe", "\x00\x00\x00\x00\x00\x00\x00\x04" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x06\xe7\xea\x22\xce\x92\x70\x8f", "\x00\x00\x00\x00\x00\x00\x00\x02" },
  { "\x01\x01\x01\x01\x01\x01\x01\x01", "\x16\x6b\x40\xb4\x4a\xba\x4b\xd6", "\x00\x00\x00\x00\x00\x00\x00\x01" },
  { "\x80\x01\x01\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x95\xa8\xd7\x28\x13\xda\xa9\x4d" },
  { "\x40\x01\x01\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x0e\xec\x14\x87\xdd\x8c\x26\xd5" },
  { "\x20\x01\x01\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x7a\xd1\x6f\xfb\x79\xc4\x59\x26" },
  { "\x10\x01\x01\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xd3\x74\x62\x94\xca\x6a\x6c\xf3" },
  { "\x08\x01\x01\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x80\x9f\x5f\x87\x3c\x1f\xd7\x61" },
  { "\x04\x01\x01\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xc0\x2f\xaf\xfe\xc9\x89\xd1\xfc" },
  { "\x02\x01\x01\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x46\x15\xaa\x1d\x33\xe7\x2f\x10" },
  { "\x01\x80\x01\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x20\x55\x12\x33\x50\xc0\x08\x58" },
  { "\x01\x40\x01\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xdf\x3b\x99\xd6\x57\x73\x97\xc8" },
  { "\x01\x20\x01\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x31\xfe\x17\x36\x9b\x52\x88\xc9" },
  { "\x01\x10\x01\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xdf\xdd\x3c\xc6\x4d\xae\x16\x42" },
  { "\x01\x08\x01\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x17\x8c\x83\xce\x2b\x39\x9d\x94" },
  { "\x01\x04\x01\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x50\xf6\x36\x32\x4a\x9b\x7f\x80" },
  { "\x01\x02\x01\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xa8\x46\x8e\xe3\xbc\x18\xf0\x6d" },
  { "\x01\x01\x80\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xa2\xdc\x9e\x92\xfd\x3c\xde\x92" },
  { "\x01\x01\x40\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xca\xc0\x9f\x79\x7d\x03\x12\x87" },
  { "\x01\x01\x20\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x90\xba\x68\x0b\x22\xae\xb5\x25" },
  { "\x01\x01\x10\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xce\x7a\x24\xf3\x50\xe2\x80\xb6" },
  { "\x01\x01\x08\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x88\x2b\xff\x0a\xa0\x1a\x0b\x87" },
  { "\x01\x01\x04\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x25\x61\x02\x88\x92\x45\x11\xc2" },
  { "\x01\x01\x02\x01\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xc7\x15\x16\xc2\x9c\x75\xd1\x70" },
  { "\x01\x01\x01\x80\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x51\x99\xc2\x9a\x52\xc9\xf0\x59" },
  { "\x01\x01\x01\x40\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xc2\x2f\x0a\x29\x4a\x71\xf2\x9f" },
  { "\x01\x01\x01\x20\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xee\x37\x14\x83\x71\x4c\x02\xea" },
  { "\x01\x01\x01\x10\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xa8\x1f\xbd\x44\x8f\x9e\x52\x2f" },
  { "\x01\x01\x01\x08\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x4f\x64\x4c\x92\xe1\x92\xdf\xed" },
  { "\x01\x01\x01\x04\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x1a\xfa\x9a\x66\xa6\xdf\x92\xae" },
  { "\x01\x01\x01\x02\x01\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xb3\xc1\xcc\x71\x5c\xb8\x79\xd8" },
  { "\x01\x01\x01\x01\x80\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x19\xd0\x32\xe6\x4a\xb0\xbd\x8b" },
  { "\x01\x01\x01\x01\x40\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x3c\xfa\xa7\xa7\xdc\x87\x20\xdc" },
  { "\x01\x01\x01\x01\x20\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xb7\x26\x5f\x7f\x44\x7a\xc6\xf3" },
  { "\x01\x01\x01\x01\x10\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x9d\xb7\x3b\x3c\x0d\x16\x3f\x54" },
  { "\x01\x01\x01\x01\x08\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x81\x81\xb6\x5b\xab\xf4\xa9\x75" },
  { "\x01\x01\x01\x01\x04\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x93\xc9\xb6\x40\x42\xea\xa2\x40" },
  { "\x01\x01\x01\x01\x02\x01\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x55\x70\x53\x08\x29\x70\x55\x92" },
  { "\x01\x01\x01\x01\x01\x80\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x86\x38\x80\x9e\x87\x87\x87\xa0" },
  { "\x01\x01\x01\x01\x01\x40\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x41\xb9\xa7\x9a\xf7\x9a\xc2\x08" },
  { "\x01\x01\x01\x01\x01\x20\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x7a\x9b\xe4\x2f\x20\x09\xa8\x92" },
  { "\x01\x01\x01\x01\x01\x10\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x29\x03\x8d\x56\xba\x6d\x27\x45" },
  { "\x01\x01\x01\x01\x01\x08\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x54\x95\xc6\xab\xf1\xe5\xdf\x51" },
  { "\x01\x01\x01\x01\x01\x04\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xae\x13\xdb\xd5\x61\x48\x89\x33" },
  { "\x01\x01\x01\x01\x01\x02\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x02\x4d\x1f\xfa\x89\x04\xe3\x89" },
  { "\x01\x01\x01\x01\x01\x01\x80\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xd1\x39\x97\x12\xf9\x9b\xf0\x2e" },
  { "\x01\x01\x01\x01\x01\x01\x40\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x14\xc1\xd7\xc1\xcf\xfe\xc7\x9e" },
  { "\x01\x01\x01\x01\x01\x01\x20\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x1d\xe5\x27\x9d\xae\x3b\xed\x6f" },
  { "\x01\x01\x01\x01\x01\x01\x10\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xe9\x41\xa3\x3f\x85\x50\x13\x03" },
  { "\x01\x01\x01\x01\x01\x01\x08\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xda\x99\xdb\xbc\x9a\x03\xf3\x79" },
  { "\x01\x01\x01\x01\x01\x01\x04\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xb7\xfc\x92\xf9\x1d\x8e\x92\xe9" },
  { "\x01\x01\x01\x01\x01\x01\x02\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xae\x8e\x5c\xaa\x3c\xa0\x4e\x85" },
  { "\x01\x01\x01\x01\x01\x01\x01\x80", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x9c\xc6\x2d\xf4\x3b\x6e\xed\x74" },
  { "\x01\x01\x01\x01\x01\x01\x01\x40", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xd8\x63\xdb\xb5\xc5\x9a\x91\xa0" },
  { "\x01\x01\x01\x01\x01\x01\x01\x20", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xa1\xab\x21\x90\x54\x5b\x91\xd7" },
  { "\x01\x01\x01\x01\x01\x01\x01\x10", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x08\x75\x04\x1e\x64\xc5\x70\xf7" },
  { "\x01\x01\x01\x01\x01\x01\x01\x08", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x5a\x59\x45\x28\xbe\xbe\xf1\xcc" },
  { "\x01\x01\x01\x01\x01\x01\x01\x04", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xfc\xdb\x32\x91\xde\x21\xf0\xc0" },
  { "\x01\x01\x01\x01\x01\x01\x01\x02", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x86\x9e\xfd\x7f\x9f\x26\x5a\x09" },
  { "\x10\x46\x91\x34\x89\x98\x01\x31", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x88\xd5\x5e\x54\xf5\x4c\x97\xb4" },
  { "\x10\x07\x10\x34\x89\x98\x80\x20", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x0c\x0c\xc0\x0c\x83\xea\x48\xfd" },
  { "\x10\x07\x10\x34\xc8\x98\x01\x20", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x83\xbc\x8e\xf3\xa6\x57\x01\x83" },
  { "\x10\x46\x10\x34\x89\x98\x80\x20", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xdf\x72\x5d\xca\xd9\x4e\xa2\xe9" },
  { "\x10\x86\x91\x15\x19\x19\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xe6\x52\xb5\x3b\x55\x0b\xe8\xb0" },
  { "\x10\x86\x91\x15\x19\x58\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xaf\x52\x71\x20\xc4\x85\xcb\xb0" },
  { "\x51\x07\xb0\x15\x19\x58\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x0f\x04\xce\x39\x3d\xb9\x26\xd5" },
  { "\x10\x07\xb0\x15\x19\x19\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xc9\xf0\x0f\xfc\x74\x07\x90\x67" },
  { "\x31\x07\x91\x54\x98\x08\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x7c\xfd\x82\xa5\x93\x25\x2b\x4e" },
  { "\x31\x07\x91\x94\x98\x08\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xcb\x49\xa2\xf9\xe9\x13\x63\xe3" },
  { "\x10\x07\x91\x15\xb9\x08\x01\x40", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x00\xb5\x88\xbe\x70\xd2\x3f\x56" },
  { "\x31\x07\x91\x15\x98\x08\x01\x40", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x40\x6a\x9a\x6a\xb4\x33\x99\xae" },
  { "\x10\x07\xd0\x15\x89\x98\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x6c\xb7\x73\x61\x1d\xca\x9a\xda" },
  { "\x91\x07\x91\x15\x89\x98\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x67\xfd\x21\xc1\x7d\xbb\x5d\x70" },
  { "\x91\x07\xd0\x15\x89\x19\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x95\x92\xcb\x41\x10\x43\x07\x87" },
  { "\x10\x07\xd0\x15\x98\x98\x01\x20", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xa6\xb7\xff\x68\xa3\x18\xdd\xd3" },
  { "\x10\x07\x94\x04\x98\x19\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x4d\x10\x21\x96\xc9\x14\xca\x16" },
  { "\x01\x07\x91\x04\x91\x19\x04\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x2d\xfa\x9f\x45\x73\x59\x49\x65" },
  { "\x01\x07\x91\x04\x91\x19\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xb4\x66\x04\x81\x6c\x0e\x07\x74" },
  { "\x01\x07\x94\x04\x91\x19\x04\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x6e\x7e\x62\x21\xa4\xf3\x4e\x87" },
  { "\x19\x07\x92\x10\x98\x1a\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xaa\x85\xe7\x46\x43\x23\x31\x99" },
  { "\x10\x07\x91\x19\x98\x19\x08\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x2e\x5a\x19\xdb\x4d\x19\x62\xd6" },
  { "\x10\x07\x91\x19\x98\x1a\x08\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x23\xa8\x66\xa8\x09\xd3\x08\x94" },
  { "\x10\x07\x92\x10\x98\x19\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xd8\x12\xd9\x61\xf0\x17\xd3\x20" },
  { "\x10\x07\x91\x15\x98\x19\x01\x0b", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x05\x56\x05\x81\x6e\x58\x60\x8f" },
  { "\x10\x04\x80\x15\x98\x19\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xab\xd8\x8e\x8b\x1b\x77\x16\xf1" },
  { "\x10\x04\x80\x15\x98\x19\x01\x02", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x53\x7a\xc9\x5b\xe6\x9d\xa1\xe1" },
  { "\x10\x04\x80\x15\x98\x19\x01\x08", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xae\xd0\xf6\xae\x3c\x25\xcd\xd8" },
  { "\x10\x02\x91\x15\x98\x10\x01\x04", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xb3\xe3\x5a\x5e\xe5\x3e\x7b\x8d" },
  { "\x10\x02\x91\x15\x98\x19\x01\x04", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x61\xc7\x9c\x71\x92\x1a\x2e\xf8" },
  { "\x10\x02\x91\x15\x98\x10\x02\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\xe2\xf5\x72\x8f\x09\x95\x01\x3c" },
  { "\x10\x02\x91\x16\x98\x10\x01\x01", "\x00\x00\x00\x00\x00\x00\x00\x00", "\x1a\xea\xc3\x9a\x61\xf0\xa4\x64" },
  { "\x7c\xa1\x10\x45\x4a\x1a\x6e\x57", "\x01\xa1\xd6\xd0\x39\x77\x67\x42", "\x69\x0f\x5b\x0d\x9a\x26\x93\x9b" },
  { "\x01\x31\xd9\x61\x9d\xc1\x37\x6e", "\x5c\xd5\x4c\xa8\x3d\xef\x57\xda", "\x7a\x38\x9d\x10\x35\x4b\xd2\x71" },
  { "\x07\xa1\x13\x3e\x4a\x0b\x26\x86", "\x02\x48\xd4\x38\x06\xf6\x71\x72", "\x86\x8e\xbb\x51\xca\xb4\x59\x9a" },
  { "\x38\x49\x67\x4c\x26\x02\x31\x9e", "\x51\x45\x4b\x58\x2d\xdf\x44\x0a", "\x71\x78\x87\x6e\x01\xf1\x9b\x2a" },
  { "\x04\xb9\x15\xba\x43\xfe\xb5\xb6", "\x42\xfd\x44\x30\x59\x57\x7f\xa2", "\xaf\x37\xfb\x42\x1f\x8c\x40\x95" },
  { "\x01\x13\xb9\x70\xfd\x34\xf2\xce", "\x05\x9b\x5e\x08\x51\xcf\x14\x3a", "\x86\xa5\x60\xf1\x0e\xc6\xd8\x5b" },
  { "\x01\x70\xf1\x75\x46\x8f\xb5\xe6", "\x07\x56\xd8\xe0\x77\x47\x61\xd2", "\x0c\xd3\xda\x02\x00\x21\xdc\x09" },
  { "\x43\x29\x7f\xad\x38\xe3\x73\xfe", "\x76\x25\x14\xb8\x29\xbf\x48\x6a", "\xea\x67\x6b\x2c\xb7\xdb\x2b\x7a" },
  { "\x07\xa7\x13\x70\x45\xda\x2a\x16", "\x3b\xdd\x11\x90\x49\x37\x28\x02", "\xdf\xd6\x4a\x81\x5c\xaf\x1a\x0f" },
  { "\x04\x68\x91\x04\xc2\xfd\x3b\x2f", "\x26\x95\x5f\x68\x35\xaf\x60\x9a", "\x5c\x51\x3c\x9c\x48\x86\xc0\x88" },
  { "\x37\xd0\x6b\xb5\x16\xcb\x75\x46", "\x16\x4d\x5e\x40\x4f\x27\x52\x32", "\x0a\x2a\xee\xae\x3f\xf4\xab\x77" },
  { "\x1f\x08\x26\x0d\x1a\xc2\x46\x5e", "\x6b\x05\x6e\x18\x75\x9f\x5c\xca", "\xef\x1b\xf0\x3e\x5d\xfa\x57\x5a" },
  { "\x58\x40\x23\x64\x1a\xba\x61\x76", "\x00\x4b\xd6\xef\x09\x17\x60\x62", "\x88\xbf\x0d\xb6\xd7\x0d\xee\x56" },
  { "\x02\x58\x16\x16\x46\x29\xb0\x07", "\x48\x0d\x39\x00\x6e\xe7\x62\xf2", "\xa1\xf9\x91\x55\x41\x02\x0b\x56" },
  { "\x49\x79\x3e\xbc\x79\xb3\x25\x8f", "\x43\x75\x40\xc8\x69\x8f\x3c\xfa", "\x6f\xbf\x1c\xaf\xcf\xfd\x05\x56" },
  { "\x4f\xb0\x5e\x15\x15\xab\x73\xa7", "\x07\x2d\x43\xa0\x77\x07\x52\x92", "\x2f\x22\xe4\x9b\xab\x7c\xa1\xac" },
  { "\x49\xe9\x5d\x6d\x4c\xa2\x29\xbf", "\x02\xfe\x55\x77\x81\x17\xf1\x2a", "\x5a\x6b\x61\x2c\xc2\x6c\xce\x4a" },
  { "\x01\x83\x10\xdc\x40\x9b\x26\xd6", "\x1d\x9d\x5c\x50\x18\xf7\x28\xc2", "\x5f\x4c\x03\x8e\xd1\x2b\x2e\x41" },
  { "\x1c\x58\x7f\x1c\x13\x92\x4f\xef", "\x30\x55\x32\x28\x6d\x6f\x29\x5a", "\x63\xfa\xc0\xd0\x34\xd9\xf7\x93" },
};
static const size_t N_DES_TESTCASES = sizeof des_testcases / sizeof des_testcases[0];

#endif /* test-des-cases.h */
