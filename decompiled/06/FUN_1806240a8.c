// FUN_1806240a8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806240a8 */

longlong FUN_1806240a8(ushort *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,
                      longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  char *pcVar5;
  char cVar6;
  uint local_res8 [2];
  
  pcVar5 = (char *)*param_2;
  puVar4 = param_1;
  if (param_1 == (ushort *)0x0) {
    lVar1 = 0;
    while( true ) {
      if (*pcVar5 == '\0') {
        cVar6 = '\x01';
      }
      else if (pcVar5[1] == '\0') {
        cVar6 = '\x02';
      }
      else {
        cVar6 = (pcVar5[2] != '\0') + '\x03';
      }
      lVar2 = FUN_180623dfc(0,pcVar5,cVar6,param_4,param_5);
      if (lVar2 == -1) {
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      if (lVar2 == 0) break;
      pcVar5 = pcVar5 + lVar2;
      lVar3 = lVar1 + 1;
      if (lVar2 != 4) {
        lVar3 = lVar1;
      }
      lVar1 = lVar3 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if (*pcVar5 == '\0') {
        cVar6 = '\x01';
      }
      else if (pcVar5[1] == '\0') {
        cVar6 = '\x02';
      }
      else {
        cVar6 = (pcVar5[2] != '\0') + '\x03';
      }
      local_res8[0] = 0;
      lVar1 = FUN_180623dfc(local_res8,pcVar5,cVar6,param_4,param_5);
      if (lVar1 == -1) {
        *param_2 = pcVar5;
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      if (lVar1 == 0) {
        pcVar5 = (char *)0x0;
        *puVar4 = 0;
        break;
      }
      if (0xffff < local_res8[0]) {
        if (param_3 < 2) break;
        param_3 = param_3 - 1;
        *puVar4 = (ushort)(local_res8[0] - 0x10000 >> 10) | 0xd800;
        puVar4 = puVar4 + 1;
        local_res8[0] = (uint)((ushort)(local_res8[0] - 0x10000) & 0x3ff | 0xdc00);
      }
      *puVar4 = (ushort)local_res8[0];
      pcVar5 = pcVar5 + lVar1;
      puVar4 = puVar4 + 1;
    }
    *param_2 = pcVar5;
    lVar1 = (longlong)puVar4 - (longlong)param_1 >> 1;
  }
  return lVar1;
}



