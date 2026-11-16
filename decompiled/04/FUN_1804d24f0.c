// FUN_1804d24f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d24f0 */

int FUN_1804d24f0(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = *param_1;
  if (cVar1 == '1') {
    bVar3 = param_1[1] == '\0';
LAB_1804d2611:
    if ((!bVar3) || (param_1[2] != '\0')) goto LAB_1804d2536;
    bVar3 = param_1[3] == '\0';
  }
  else if (cVar1 == 't') {
    if (param_1[1] != 'y') {
      if (((param_1[1] != 'r') || (param_1[2] != 'u')) || (param_1[3] != 'e')) goto LAB_1804d2536;
      goto LAB_1804d262b;
    }
    if (param_1[2] != 'p') goto LAB_1804d2536;
    bVar3 = param_1[3] == '1';
  }
  else {
    if (cVar1 != 'O') {
      if (cVar1 != '\0') goto LAB_1804d2536;
      bVar3 = param_1[1] == '\x01';
      goto LAB_1804d2611;
    }
    if ((param_1[1] != 'T') || (param_1[2] != 'T')) goto LAB_1804d2536;
    bVar3 = param_1[3] == 'O';
  }
  if (bVar3) {
LAB_1804d262b:
    return -(uint)(param_2 != 0);
  }
LAB_1804d2536:
  if ((((cVar1 == 't') && (param_1[1] == 't')) && ((param_1[2] == 'c' && (param_1[3] == 'f')))) &&
     (((iVar2 = (uint)(byte)param_1[5] * 0x10000 + (uint)(byte)param_1[6] * 0x100 +
                (uint)(byte)param_1[4] * 0x1000000 + (uint)(byte)param_1[7], iVar2 == 0x10000 ||
       (iVar2 == 0x20000)) &&
      (param_2 < CONCAT31(CONCAT21(CONCAT11(param_1[8],param_1[9]),param_1[10]),param_1[0xb]))))) {
    return (uint)(byte)param_1[(longlong)(param_2 * 4) + 0xd] * 0x10000 +
           (uint)(byte)param_1[(longlong)(param_2 * 4) + 0xe] * 0x100 +
           (uint)(byte)param_1[(longlong)(param_2 * 4) + 0xc] * 0x1000000 +
           (uint)(byte)param_1[(longlong)(param_2 * 4) + 0xf];
  }
  return -1;
}



