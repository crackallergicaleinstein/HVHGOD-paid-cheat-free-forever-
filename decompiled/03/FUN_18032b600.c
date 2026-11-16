// FUN_18032b600 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18032b600 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18032b600(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  longlong local_res8;
  undefined1 local_res10 [8];
  byte bStack_e1;
  uint uStack_b0;
  ushort uStack_9a;
  uint uStack_94;
  undefined2 uStack_7a;
  uint uStack_44;
  
  _DAT_180b8fc30 = (ushort)DAT_180b8fc30;
  local_res8 = param_1;
  FUN_18017bf40(&local_res8);
  lVar1 = local_res8;
  plVar3 = (longlong *)FUN_18017bf40(local_res10);
  DAT_180bda168 = *plVar3 + 4000000;
  DAT_180bbeaba = 0;
  if (DAT_180b8fc32 == '\0') {
    if ((((DAT_180bda1bc <= 3.0) && (DAT_180bda1bc <= 2.0)) || (param_2 == 0)) ||
       ((*(byte *)(param_2 + 8) & 1) == 0)) goto LAB_18032b6b0;
    if ((DAT_1808e3d20 != '\0') || (DAT_1808e3d31 != '\0')) goto LAB_18032b6da;
    cVar2 = '\0';
    _DAT_180b8fc30 = (ushort)DAT_180b8fc31 << 8;
    DAT_180b8fccc = 0;
    DAT_180b8fd1d = 0;
LAB_18032b6e7:
    if ((DAT_180cc8600 != '\0') && (cVar2 == '\0')) {
      cVar2 = FUN_18031ef00(&DAT_180b8fc30,param_2);
      if ((cVar2 != '\0') || (DAT_1808e3d31 != '\0')) {
        _DAT_180b8fc30 = 0x101;
      }
      goto LAB_18032b87f;
    }
  }
  else {
LAB_18032b6b0:
    if ((DAT_1808e3d20 == '\0') && (DAT_1808e3d31 == '\0')) {
      FUN_18030e6e0(&DAT_180b8fc30,param_2);
      cVar2 = DAT_180b8fc30;
    }
    else {
LAB_18032b6da:
      _DAT_180b8fc30 = (ushort)DAT_180b8fc31 << 8;
      cVar2 = '\0';
    }
    if (param_2 != 0) goto LAB_18032b6e7;
  }
  uStack_44 = uStack_44 & 0xffffff00;
  uStack_94 = uStack_94 & 0xffffff00;
  uStack_b0 = uStack_b0 & 0xffffff00;
  _DAT_1808e3d20 = (ulonglong)bStack_e1 << 0x38;
  _DAT_1808e3d28 = 0x3c80000000000000;
  _DAT_1808e3d30 = 0x10000;
  _DAT_1808e3d38 = 0;
  _DAT_1808e3d58 = CONCAT44(0xffffffff,uStack_b0);
  _DAT_1808e3d40 = 0;
  _DAT_1808e3d48 = 0xffffffffffffffff;
  _DAT_1808e3d50 = 0xffffffffffffffff;
  _DAT_1808e3d68 = (ulonglong)uStack_9a << 0x30;
  _DAT_1808e3d70 = (ulonglong)uStack_94 << 0x20;
  _DAT_1808e3d60 = 0xfffffffffffffc18;
  _DAT_1808e3d78 = 0xbf800000fffffc18;
  _DAT_1808e3d88 = CONCAT26(uStack_7a,0xffffffff);
  _DAT_1808e3d80 = 0xffffffffffffffff;
  _DAT_1808e3d90 = 0;
  _DAT_1808e3d98 = 0;
  _DAT_1808e3da0 = 0;
  _DAT_1808e3da8 = 0xfffffc18;
  _DAT_1808e3db0 = 0;
  _DAT_1808e3db8 = 0;
  _DAT_1808e3dc0 = (ulonglong)uStack_44 << 0x20;
  _DAT_1808e3dc8 = 0xfffffffffffffc18;
  _DAT_1808e3dd0 = 0;
  _DAT_1808e3dd8 = 0;
  _DAT_1808e3de0 = 0xffffffff;
  uRam00000001808e3de8 = 0;
  DAT_1808e3df0 = 0;
  DAT_1808e3df8 = 0;
LAB_18032b87f:
  plVar3 = (longlong *)FUN_18017bf40(&local_res8);
  fVar4 = (float)(*plVar3 - lVar1) / 1e+06;
  if (fVar4 <= 0.2) {
    DAT_180bda1bc = DAT_180bda1bc * 0.97;
  }
  else {
    DAT_180bda1bc = fVar4 * 0.2 + DAT_180bda1bc * 0.8;
  }
  return;
}



