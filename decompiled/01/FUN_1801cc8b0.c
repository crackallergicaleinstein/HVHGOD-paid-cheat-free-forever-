// FUN_1801cc8b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801cc8b0 */

undefined8 FUN_1801cc8b0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  
  param_1[2] = 0;
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  *(undefined1 *)puVar2 = 0;
  param_2[2] = 0;
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  *(undefined1 *)puVar2 = 0;
  pbVar3 = &DAT_1807c6798;
  while (((bVar1 = *pbVar3, 0x2f < bVar1 && (bVar1 < 0x3a)) || ((byte)(bVar1 + 0xbf) < 6))) {
    pbVar3 = pbVar3 + 1;
    if (pbVar3 == &DAT_1807c67c0) {
      FUN_180113930(param_1,
                    "LS0tLS1CRUdJTiBQVUJMSUMgS0VZLS0tLS0KTUZrd0V3WUhLb1pJemowQ0FRWUlLb1pJemowREFRY0RRZ0FFYVd2TWRYQ0d6MDRJMXdWTmFhVXlQZjdwM3ZsVwoyK09OQkI1aG9pWUhiVXpkZW1LVWR4YnNseHZRVVYrUk16SU4vWGVRMDJ2dkNwbkdFUHRmbk5Wc0xBPT0KLS0tLS1FTkQgUFVCTElDIEtFWS0tLS0tCg=="
                    ,0xf0);
      FUN_180113930(param_2,&DAT_1807c6798,0x28);
      return 1;
    }
  }
  return 0;
}



