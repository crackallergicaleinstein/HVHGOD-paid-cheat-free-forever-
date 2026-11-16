// FUN_1804b2910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b2910 */

char FUN_1804b2910(int *param_1)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  float fVar5;
  
  lVar2 = *(longlong *)(param_1 + 10);
  fVar5 = 0.0;
  fVar1 = (float)param_1[4];
  cVar3 = FUN_1804b2050();
  if ((cVar3 != '\0') && (param_1[1] <= *param_1)) {
    cVar3 = '\0';
  }
  if (((*(longlong *)(lVar2 + 0x2338) != 0) &&
      (*(char *)(*(longlong *)(lVar2 + 0x2338) + 0x24d) == '\0')) &&
     ((*(byte *)(lVar2 + 0x28cc) & 0x20) != 0)) {
    FUN_1804cf3e0("Clipper: Step(): inside frozen table row.\n");
  }
  if (fVar1 <= 0.0) {
    if ((fVar5 < (float)param_1[4]) && ((*(byte *)(lVar2 + 0x28cc) & 0x20) != 0)) {
      FUN_1804cf3e0("Clipper: Step(): computed ItemsHeight: %.2f.\n",(double)(float)param_1[4]);
    }
  }
  uVar4 = *(uint *)(lVar2 + 0x28cc) & 0x20;
  if (cVar3 == '\0') {
    if (uVar4 != 0) {
      FUN_1804cf3e0("Clipper: Step(): End.\n");
    }
    FUN_1804b1e70(param_1);
  }
  else if (uVar4 != 0) {
    FUN_1804cf3e0("Clipper: Step(): display %d to %d.\n",*param_1,param_1[1]);
  }
  return cVar3;
}



