#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
import typing as t

from thrift import Thrift
from thrift.protocol.TProtocol import TProtocolBase

UTF8STRINGS: bool


class Item:

    thrift_spec: t.Tuple[t.Optional[t.Tuple[int, int, str, t.Any, t.Optional[int], int]]]
    thrift_field_annotations: t.Dict[int, t.Dict[str, str]]
    thrift_struct_annotations: t.Dict[str, str]

    def __init__(
        self,
        key: t.Optional[str] = ...,
        value: t.Optional[bytes] = ...
    ) -> None:
        self.key: t.Optional[str]
        self.value: t.Optional[bytes]

    def isUnion(self) -> bool: ...
    def checkRequired(self) -> None: ...
    def read(self, iprot: TProtocolBase) -> None: ...
    def write(self, oprot: TProtocolBase) -> None: ...
    def __eq__(self, other: t.Any) -> bool: ...
    def __ne__(self, other: t.Any) -> bool: ...

