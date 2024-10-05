from abc import ABC



class ResourceManager(ABC):
    _instance: 'ResourceManager' = None

    def __new__(cls) -> 'ResourceManager':

        if cls._instance is None:
            cls._instance = super(ResourceManager, cls).__new__(cls)
            cls._allocated = cls.request_resources()
        return cls._instance
    
    @staticmethod
    def request_resources() -> str:
        return "Resources have been requested."
    


class CPUResource(ResourceManager):
    def request_resources(self) -> str:
        return "CPU Resources requested."


class MemoryResource(ResourceManager):
    def request_resources(self) -> str:
        return "Memory Resources requested."


class GPUResource(ResourceManager):
    def request_resources(self) -> str:
        return "GPU Resources requested."


class resources():
    ...


# Factory class
class ResourceFactory:
    @staticmethod
    def get_resources(resource_type: str) -> ResourceManager:
        resource_classes = {
            "cpu": CPUResource,
            "memory": MemoryResource,
            "gpu": GPUResource
        }
        try:
            return resource_classes[resource_type.lower()]()
        except KeyError:
            raise ValueError(f"Unknown resource type: {resource_type}")


if __name__ == "__main__":
    resource = ResourceFactory.get_resources('cpu')
    print(resource.request_resources())  # Output: CPU Resources requested

    resource = ResourceFactory.get_resources('memory')
    print(resource.request_resources())  # Output: Memory Resources requested

    resource = ResourceFactory.get_resources('gpu')
    print(resource.request_resources())  # Output: GPU Resources requested