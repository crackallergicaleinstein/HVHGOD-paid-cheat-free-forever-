// FUN_1801faf10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801faf10 */

undefined8
FUN_1801faf10(longlong *param_1,longlong param_2,int param_3,longlong param_4,char param_5,
             ushort param_6,undefined8 param_7)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  
  if (((param_2 != 0) && (param_3 != -1)) && (param_4 != 0)) {
    if (((param_2 != *param_1) || (param_3 != (int)param_1[2])) || (param_4 != param_1[1])) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = param_2;
      *(int *)(param_1 + 2) = param_3;
      param_1[1] = param_4;
    }
    if (*(char *)((longlong)param_1 + 0x17) != param_5) {
      *(char *)((longlong)param_1 + 0x17) = param_5;
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if ((char)param_1[3] == '\0') {
      if ((param_5 == '\0') && (*(char *)((longlong)param_1 + 0x16) == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0x15) = 0;
      }
      else {
        lVar3 = FUN_18017ea70();
        param_6 = param_6 & 0xff00;
        *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + 1;
        cVar2 = FUN_1804514f0(&param_6,param_4,1);
        bVar1 = (byte)param_6;
        lVar3 = FUN_18017ea70();
        if (*(int *)(lVar3 + 4) != 0) {
          *(int *)(lVar3 + 4) = *(int *)(lVar3 + 4) + -1;
        }
        if ((cVar2 != '\0') && (bVar1 < 2)) {
          if (param_5 == '\0') {
            if (bVar1 != 1) {
              *(undefined2 *)((longlong)param_1 + 0x15) = 0;
              return 0;
            }
            if (*(char *)((longlong)param_1 + 0x15) == '\0') {
              return 0;
            }
            cVar2 = FUN_1801f8ed0(param_7,param_4,*(undefined1 *)((longlong)param_1 + 0x14));
            if (cVar2 != '\0') {
              *(undefined2 *)((longlong)param_1 + 0x15) = 0;
              return 1;
            }
          }
          else {
            if (*(char *)((longlong)param_1 + 0x15) == '\0') {
              param_6 = CONCAT11(1,bVar1);
              *(ushort *)((longlong)param_1 + 0x14) = param_6;
            }
            if ((bVar1 == 1) && (*(char *)((longlong)param_1 + 0x16) != '\0')) {
              return 0;
            }
            cVar2 = FUN_1801f8ed0(param_7,param_4,1);
            if (cVar2 != '\0') {
              *(undefined1 *)((longlong)param_1 + 0x16) = 1;
              return 1;
            }
          }
          *(undefined1 *)(param_1 + 3) = 1;
        }
      }
    }
  }
  return 0;
}



